/*

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

*/

int find_short(std::string str)
{
  
  std::cout << str << std::endl;

  std::vector<std::string> vecteur;
  std::vector<int> vLength;

  int n = str.length();

  std::string currStr = "";

  for(int i=0; i < n; i++){
    if(str[i]==' '){
      vecteur.push_back(currStr);
      vLength.push_back(currStr.length());
      currStr = "";
    }
    else{
      currStr+=str[i];
    }
  }
  
  vecteur.push_back(currStr);
  vLength.push_back(currStr.length());

  int minimum = *min_element(vLength.begin(), vLength.end());

  return minimum;

}

/* Description

Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.

*/

/* Tests

Describe(Tests)
{
  It(Sample_Test_Cases)
  {
    Assert::That(find_short("bitcoin take over the world maybe who knows perhaps"), Equals(3));
    Assert::That(find_short("turns out random test cases are easier than writing out basic ones"), Equals(3));
    Assert::That(find_short("lets talk about javascript the best language"), Equals(3));
    Assert::That(find_short("i want to travel the world writing code one day"), Equals(1));
    Assert::That(find_short("Lets all go on holiday somewhere very cold"), Equals(2));
    Assert::That(find_short("Let's travel abroad shall we"), Equals(2));
  }
};

*/