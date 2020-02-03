#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::string str = "racecar";
    std::string str1 = "A man, a plan, a canal, Panama!";

    std::cout << solution.IsPalindrome(str) << std::endl;
    std::cout << solution.IsApproxPalindrome(str1) << std::endl;

    return EXIT_SUCCESS;
}

