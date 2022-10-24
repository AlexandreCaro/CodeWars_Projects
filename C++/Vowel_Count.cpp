//#include <string>

int getCount(const std::string& inputStr){
  int num_vowels = 0;
  
  std::string vowels = "aeiou";
  
  int n = inputStr.length();
  
  for (int i=0; i <n; i++){
    if(vowels.find(inputStr[i])!=std::string::npos){
      num_vowels+=1;
    }
  }
  
  return num_vowels;
}

"Ideal Solution"

//#include <string>

bool is_vowel(char c){
  return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int getCount(const std::string& inputStr){
  
  return std::count_if(inputStr.begin(), inputStr.end(), is_vowel);
}

"""Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces."""

"""Describe(sample_test_cases)
{
    It(test_1)
    {
        Assert::That(getCount("abracadabra"), Equals(5));
    }
};"""