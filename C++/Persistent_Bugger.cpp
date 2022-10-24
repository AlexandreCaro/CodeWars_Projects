"6 kyu(easy++)"

/*#include <iostream>
#include <string>*/

int persistence(long long n){
  
  std::cout << n << std::endl;
  
  int produit = 1;
  
  int current=n;
  
  int count = 0;
  
  while (std::to_string(current).length()>1){
    
    produit = 1;
    
    for(auto c: std::to_string(current)){
    
    produit = produit * ((int) c-48);
    
    }
    
    current = produit;
    
    count +=1;
    
  }
  
  return count;
}

"""Description

Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, 
which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)

"""

"""Tests

Describe(Persistent_Bugger)
{
    It(Fixed_tests)
    {
        Assert::That(persistence(39), Equals(3));
        Assert::That(persistence(4), Equals(0));
        Assert::That(persistence(25), Equals(2));
        Assert::That(persistence(999), Equals(4));
        Assert::That(persistence(444), Equals(3));     
    }
};

"""