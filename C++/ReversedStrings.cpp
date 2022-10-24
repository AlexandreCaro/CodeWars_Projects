"8 kyu"

//#include <string>
using namespace std ; 

string reverseString (string str )
{
  int n = str.length();
  
  for(int i=0; i < n/2; i++){
    std::swap(str[i], str[n-i-1]);
  }
  
  return str;
}