"7 kyu(easy+)"

"My Solution"

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      
      std::string newString = "";
      
      for(char c: s1){
        if(newString.find(c)!= std::string::npos){
          continue;
        }
        else{
          newString.push_back(c);
        }
      }
      
      for(char c: s2){
        if(newString.find(c)!=std::string::npos){
          continue;
        }
        else{
          newString.push_back(c);
        }
      }
      
      sort(newString.begin(), newString.end());
      
      return newString;
    };
};

"Reference solution"

//#include <set>
//#include <string>

namespace TwoToOne {

std::string longest(const std::string& s1, const std::string& s2) {
  std::set<char> chars(s1.begin(), s1.end());
  for (char c : s2)
    chars.insert(c);
  return std::string(chars.begin(), chars.end());
}

}

"""Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

Examples:
a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz""""

"""

void testequal(std::string ans, std::string sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(std::string a1, std::string a2, std::string expected)
{
    testequal(TwoToOne::longest(a1, a2), expected);
}
Describe(longest_Tests)
{
    It(Fixed__Tests)
    {
        dotest("aretheyhere", "yestheyarehere", "aehrsty");
        dotest("loopingisfunbutdangerous", "lessdangerousthancoding", "abcdefghilnoprstu");
    }
};


"""