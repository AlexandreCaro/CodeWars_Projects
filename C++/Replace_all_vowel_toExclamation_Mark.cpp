"7 kyu(easy+)"

using namespace std;

string replace(const string &s)
{
  
  string toFind = "aeiou";
  
  string toChange = s;
  
  int n_s = s.length();
  
  int n = toFind.length();
  
  for(int i=0; i < n_s; i++){
    for(int j=0; j < n; j++){
      if(tolower(toChange[i])==toFind[j]){
    
        toChange[i] = '!';
      }
    }
  }
    
  return toChange;
}

"""Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"

"""

"""Tests

Describe(Sample_Test)
{
    It(Basic_Tests)
    {
        Assert::That(replace("Hi!"),      Equals("H!!"));
        Assert::That(replace("!Hi! Hi!"), Equals("!H!! H!!"));
        Assert::That(replace("aeiou"),    Equals("!!!!!"));
        Assert::That(replace("ABCDE"),    Equals("!BCD!"));
    }
};

"""