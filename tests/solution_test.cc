#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PalindromeShould, PalindromeReturn) {
  Solution solution;
  std::string str = "racecar";
  bool expected = solution.IsPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeShould_1, PalindromeReturn_1) {
  Solution solution;
  std::string str = "1121";
  bool expected = solution.IsPalindrome(str);
  bool actual = false;
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeShould_2, PalindromeReturn_2) {
  Solution solution;
  std::string str = "1221";
  bool expected = solution.IsPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeShould_3, PalindromeReturn_3) {
  Solution solution;
  std::string str = "";
  bool expected = solution.IsPalindrome(str);
  bool actual = false;
  EXPECT_EQ(expected, actual);
}

TEST(PalindromeShould_4, PalindromeReturn_4) {
  Solution solution;
  std::string str = "1";
  bool expected = solution.IsPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould, ApproxPalindromeReturn) {
  Solution solution;
  std::string str = "A man, a plan, a canal, Panama!";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould_1, ApproxPalindromeReturn_1) {
  Solution solution;
  std::string str = "";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = false;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould_2, ApproxPalindromeReturn_2) {
  Solution solution;
  std::string str = "Was it a car or a cat I saw?";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould_3, ApproxPalindromeReturn_3) {
  Solution solution;
  std::string str = "No 'x' in Nixon............";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould_4, ApproxPalindromeReturn_4) {
  Solution solution;
  std::string str = "*678,./AsgTtGsa      )((*!@876?><";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = true;
  EXPECT_EQ(expected, actual);
}

TEST(ApproxPalindromeShould_5, ApproxPalindromeReturn_5) {
  Solution solution;
  std::string str = "*678,./As98gTtGs98a      )((*!@876?><";
  bool expected = solution.IsApproxPalindrome(str);
  bool actual = false;
  EXPECT_EQ(expected, actual);
}