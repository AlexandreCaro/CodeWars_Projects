"7 kyu"

/*
#include <iostream>
#include <cmath>
#include <iomanip>
*/

std::string seriesSum(int n)
{
    double somme = 0;
  
    if(n==0){
      return "0.00";
    }
  
    for(int i=0; i < n; i++){
      if(i==0){somme+=1;}
      else{somme += (1./(3*i+1));}
    }
  
  std::cout << n << " " << somme << std::endl;
  
  somme = std::floor(somme*100+0.5)/100.0;
  
  std::string stringSomme = std::to_string(somme);
  
  std::string stringApprox;
  
  for(int i=0; i < stringSomme.size(); i++){
    if(i<4){stringApprox += stringSomme[i];}
    else {break;}
  }
  
  return stringApprox;
  
}

/*

Your task is to write a function which returns the sum of following series upto nth term(parameter).

Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:
You need to round the answer to 2 decimal places and return it as String.

If the given value is 0 then it should return 0.00

You will only be given Natural Numbers as arguments.

Examples:(Input --> Output)
1 --> 1 --> "1.00"
2 --> 1 + 1/4 --> "1.25"
5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"

*/