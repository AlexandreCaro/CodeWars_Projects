"8 kyu(easy)"

// #include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int catYears=0;
  int dogYears=0;
  
  if(humanYears==1){
    catYears+=15;
    dogYears+=15;
  }
  else if(humanYears==2){
    catYears = 15 + 9;
    dogYears = 15+9;
  }
  else {
    catYears = 24 + 4*(humanYears-2);
    dogYears = 24 + 5 *(humanYears-2);
  }
  
  std::vector<int> vecteurAge;
  
  vecteurAge.push_back(humanYears);
  vecteurAge.push_back(catYears);
  vecteurAge.push_back(dogYears);
  
  return vecteurAge;
}

/* Description

I have a cat and a dog.

I got them at the same time as kitten/puppy. That was humanYears years ago.

Return their respective ages now as [humanYears,catYears,dogYears]

NOTES:

humanYears >= 1
humanYears are whole numbers only
Cat Years
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that

*/

/* Tests

using V = std::vector<int>;

Describe(HumanYearsCatYearsDogYears) {
  It(BasicTests) {
    Assert::That(humanYearsCatYearsDogYears( 1), Equals(V{1, 15, 15}));
    Assert::That(humanYearsCatYearsDogYears( 2), Equals(V{2, 24, 24}));
    Assert::That(humanYearsCatYearsDogYears(10), Equals(V{10, 56, 64}));
  }
};

*/

