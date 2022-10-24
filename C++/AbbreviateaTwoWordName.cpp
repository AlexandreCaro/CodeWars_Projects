"8 kyu(easy)"

// #include <string>

std::string abbrevName(std::string name)
{
  std::string stringName = "";
  
  int n = name.length();
  
  for(int i=0; i < n; i++){
    if(stringName.empty()){
      stringName += std::toupper(name[i]);
      stringName += ".";
    }
    else if(name[i]==' '){
      stringName+=std::toupper(name[i+1]);
    }
  }
  
  return stringName;
}

/* Description

Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F

*/

/* Tests

Describe(Tests)
{
  It(Fixed_tests)
  {
    Assert::That(abbrevName("Sam Harris"), Equals("S.H"));
    Assert::That(abbrevName("Patrick Feenan"), Equals("P.F"));
    Assert::That(abbrevName("Evan Cole"), Equals("E.C"));
    Assert::That(abbrevName("P Favuzzi"), Equals("P.F"));
    Assert::That(abbrevName("David Mendieta"), Equals("D.M"));
  }
};

*/