#include <vector>
#include <iostream>

class Kata
{
public:
  bool compare(std::string str1, std::string str2){
          return str1.size() < str2.size();
        };
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
      
      int n = sizeof(array)/sizeof(array[0]);
      
      std::sort(array, array+n, compare);
      
      return array;
    }
};