#include "solution.h"

bool Solution::IsPalindrome(const std::string &str)
{
  if (str.length() == 0)
    return false;

  for (unsigned int i = 0; i < str.length() / 2; i++)
  {
    if (str[i] != str[str.length() - 1 - i])
      return false;
  }

  return true;
}

bool Solution::IsApproxPalindrome(std::string &str)
{
  unsigned int i = 0, j = str.length() - 1;

  if (str.length() == 0)
    return false;

  while (i < j) {
    if (!((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))) {
      i++;
      continue;
    }
    else
      str[i] = tolower(str[i]);
    if (!((str[j] > 47 && str[j] < 58) || (str[j] > 64 && str[j] < 91) || (str[j] > 96 && str[j] < 123))) {
      j--;
      continue;
    }
    else
      str[j] = tolower(str[j]);

      if (str[i] != str[j])
        return false;
      else {
        i++;
        j--;
      }
  }

  return true;
}