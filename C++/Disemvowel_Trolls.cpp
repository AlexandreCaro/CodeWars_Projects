"7 kyu(easy+)"

//# include <string>

bool is_vowel(char c){
  return (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
}

std::string disemvowel(const std::string& str) {
    int n = str.length();
  
    std::string newStr = "";
  
    for(int i=0; i<n; i++){
      if(is_vowel(str[i])){
        continue;
      }
      else {
        newStr+=str[i];
      }
    }
  
  return newStr;
}

"Ideal solution"

//# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
}


"""Description

Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.

"""

"""Tests

Describe(Sample_tests)
{
    It(Tests)
    {
        Assert::That(disemvowel("This website is for losers LOL!"), 
            Equals("Ths wbst s fr lsrs LL!"));
    }
};

"""