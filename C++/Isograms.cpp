"7 kyu(easy+)"

bool is_isogram(std::string str) {
  
  std::string newString = "";
  
  int n = str.length();
  
  for(int i=0; i < n; i++){
    if(std::find(newString.begin(), newString.end(), std::tolower(str[i])) != newString.end()){
      return false;
    }
    else {
      newString+=std::tolower(str[i]);
    }
  }
  
  return true;
}

/* Description

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)

*/

/* Tests

Describe(Tests)
{
    It(isogram_or_not)
    {
        Assert::That(is_isogram("Dermatoglyphics"), Equals(true));
        Assert::That(is_isogram("moose"), Equals(false));
        Assert::That(is_isogram("isIsogram"), Equals(false));
    }
};

*/