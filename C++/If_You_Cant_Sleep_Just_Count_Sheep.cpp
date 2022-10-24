"8 kyu(easy)"

// #include <string>

std::string countSheep(int number) {
  
  std::string newStr = "";
  
  for(int i=1; i <= number; i++){
    newStr += std::to_string(i);
    newStr += " sheep...";
  }
  
  return newStr;
}

/* Description

If you can't sleep, just count sheep!!

Task:
Given a non-negative integer, 3 for example, return a string with a murmur:
"1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.

*/

/* Tests

Describe(CountingSheep) {
  It(BasicTests) {
    Assert::That(countSheep(0), Equals(""));
    Assert::That(countSheep(1), Equals("1 sheep..."));
    Assert::That(countSheep(2), Equals("1 sheep...2 sheep..."));
    Assert::That(countSheep(3), Equals("1 sheep...2 sheep...3 sheep..."));
    Assert::That(countSheep(4), Equals("1 sheep...2 sheep...3 sheep...4 sheep..."));
    Assert::That(countSheep(5), Equals("1 sheep...2 sheep...3 sheep...4 sheep...5 sheep..."));
  }
};

*/