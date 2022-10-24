"7 kyu"

class Accumul
{
public:
    static std::string accum(const std::string &s){
      
      std::string str;
      
      int n = s.size();
      
      for(int i=0; i < n; i++){
        str += std::toupper(s[i]);
        for(int j=0; j < i; j++){
          str+= std::tolower(s[i]);
        }
        if(i==n-1){break;}
        str += '-';
      }
      
      return str;
    };
};

/*

This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.

*/