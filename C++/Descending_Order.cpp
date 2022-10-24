/*#include <iostream>
#include <stdlib.h>
#include <cinttypes>
#include <stdio.h>*/

uint64_t descendingOrder(uint64_t a)
{
  
  std::cout << a << std::endl;
  
  std::string newStr = std::to_string(a);
  
  std::sort(newStr.begin(), newStr.end());
  
  std::reverse(newStr.begin(),newStr.end());
  
  std::cout << newStr << std::endl;
  
  const char * newChar = newStr.c_str();
  
  uint64_t newNumber = std::strtoul(newChar, NULL, 10);
  
  return newNumber;
}

"Ideal solution"

/*#include <string>
#include <algorithm>
#include <cinttypes>*/

uint64_t descendingOrder(uint64_t a)
{
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}

"""Description

Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321

"""

"""Tests

include <cinttypes>

uint64_t descendingOrder(uint64_t);

Describe(testDescendingOrder)
{
    It(should_work_on_several_examples)
    {
        Assert::That(descendingOrder(0), Equals(0));
        Assert::That(descendingOrder(1), Equals(1));
        Assert::That(descendingOrder(15), Equals(51));
        Assert::That(descendingOrder(1021), Equals(2110));
        Assert::That(descendingOrder(123456789), Equals(987654321));
    }
};

"""