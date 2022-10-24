"7 kyu(easy+)"

int square_digits(int num) {
 
  std::string number = std::to_string(num);
  
  int n = number.size();
    
  std::string newNumber;
    
  for(int i=0; i < n; i++){
    newNumber+= std::to_string((number[i]-48)*(number[i]-48));
  }
  
  return stoi(newNumber);
}

"""

Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.

Note: The function accepts an integer and returns an integer

"""

"""Describe(Square_Every_Digit)
{
    It(Sample_tests)
    {       
        Assert::That(square_digits(3212), Equals(9414));   
        Assert::That(square_digits(2112), Equals(4114)); 
        Assert::That(square_digits(0), Equals(0));
        Assert::That(square_digits(13579), Equals(19254981));   
        Assert::That(square_digits(24680), Equals(41636640)); 
    }  
};
"""