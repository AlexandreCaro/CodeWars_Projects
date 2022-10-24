"8 kyu(easy)"

// #include <vector>
// #include <string>

std::vector<std::string> string_to_array(const std::string& s) {
    
  std::vector<std::string> arrayString;
  
  
  int n = s.size();
  
  std::string current = "";
  
  for(int i=0; i < n; i++){
    if(s[i]==' '){arrayString.push_back(current);
                 current = "";}
    else {current += s[i];}
  }
  
  arrayString.push_back(current);
  
  return arrayString;
}

/*

Description:

Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they",

*/

/* Tests:

#include <string>
#include <vector>

Describe(Fixed_tests)
{
    It(Basic_cases)
    {
        Assert::That(string_to_array("some value"),
                     Equals(std::vector<std::string>{"some", "value"}));
        Assert::That(string_to_array("Robin Singh"),
                     Equals(std::vector<std::string>{"Robin", "Singh"}));
        Assert::That(string_to_array("Codewars"),
                     Equals(std::vector<std::string>{"Codewars"}));
        Assert::That(string_to_array("I love arrays"),
                     Equals(std::vector<std::string>{"I", "love", "arrays"}));
        Assert::That(string_to_array("1 2 3"),
                     Equals(std::vector<std::string>{"1", "2", "3"}));
    }
    
    It(Empty_string)
    { Assert::That(string_to_array(""), Equals(std::vector<std::string>{""})); }
};

*/

