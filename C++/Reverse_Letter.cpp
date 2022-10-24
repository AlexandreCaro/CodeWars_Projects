"7 kyu(easy+)"

std::string reverse_letter(const std::string &str)
{
    int n = str.length();
  
    std::string reverseString = "";
  
    int i=n-1;
  
    while(i>=0){
      if(isalpha(str[i])){
      reverseString+=str[i];
      }
      i-=1;
    }
  
  return reverseString;
}

"Ideal solution"

std::string reverse_letter(const std::string &str)
{
    std::string copy(str.rbegin(), str.rend());
    copy.erase(std::remove_if(copy.begin(), copy.end(), [](char c){return !isalpha(c);} ), copy.end());
    return copy;
}

"""Task
Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string"""

"""Describe(sample_test)
{
    It(basic_tests)
    {
        doTest("krishan", "nahsirk");
        doTest("ultr53o?n", "nortlu");
        doTest("ab23c", "cba");
        doTest("krish21an", "nahsirk");
    }
    void doTest(const std::string &str, const std::string &expected)
    {
        Assert::That(reverse_letter(str), Equals(expected));
    }
};"""