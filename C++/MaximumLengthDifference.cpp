"7 kyu(easy+)"

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2){
      
      if(a1.empty() || a2.empty()){
        return -1;
      }
      
      std::vector<int> a1Length, a2Length, aLength;
      
      int n1 = a1.size();
      int n2 = a2.size();
      
      for(int i=0; i < n1; i++){
        a1Length.push_back(a1[i].length());
        
      }
      for(int j=0; j < n2; j++){
        a2Length.push_back(a2[j].length());
      }
      
      for(int x=0; x < n1; x++){
        for(int y =0; y < n2; y++){
          aLength.push_back(std::abs(a1Length[x]-a2Length[y]));
        }
      }
      
      int maximum = 0;
      
      for(int i=0; i < aLength.size(); i++){
        if(maximum< aLength[i]){
          maximum = aLength[i];
        }
      }
      
      return maximum;
  
    };
};

/* Description

You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the
 first array and y be any string in the second array.

Find max(abs(length(x) − length(y)))

If a1 and/or a2 are empty return -1 in each language except in Haskell (F#) where you will return Nothing (None).

Example:
a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
mxdiflg(a1, a2) --> 13

*/

/* Tests

#include <string>
#include <vector>

void testequal(int ans, int sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(std::vector<std::string> &a1, std::vector<std::string> &a2, int expected)
{
    testequal(MaxDiffLength::mxdiflg(a1, a2), expected);
}
Describe(mxdiflg_Tests)
{
    It(Fixed__Tests)
    {
        std::vector<std::string> s1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
        std::vector<std::string> s2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
        dotest(s1, s2, 13);
        s1 = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
        s2 = {"bbbaaayddqbbrrrv"};
        dotest(s1, s2, 10);
    }
};

*/