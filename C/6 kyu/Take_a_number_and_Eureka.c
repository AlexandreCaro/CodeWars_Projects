//  don't allocate memory for the results array
//  assign values to the provided results array
//  set length pointer as size of results array
//  after calculations return the results array

#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*The number 898989 is the first integer with more than one digit that fulfills the property partially introduced in the title of this kata.
What's the use of saying "Eureka"? Because this sum gives the same number: 89=81+9289 = 8^1 + 9^289=81+92

The next number in having this property is 135135135:

See this property again: 135=11+32+53135 = 1^1 + 3^2 + 5^3135=11+32+53
Task

We need a function to collect these numbers, that may receive two integers aaa, bbb that defines the range [a,b][a, b][a,b] (inclusive) and outputs a 
list of the sorted numbers in the range that fulfills the property described above.

Examples

Let's see some cases (input -> output):

1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]

If there are no numbers of this kind in the range [a,b][a, b][a,b] the function should output an empty list.

90, 100 --> []
*/

typedef unsigned long long ull;

bool isEureka(ull num){
  
  int result = 1;
  
  char number[50];
  
  sprintf(number, "%u", num);
  
  size_t size = strlen(number);
  
  //printf("number: %s ", number);
  
  //printf("size: %d\n", size);
  if(size==1){
    result = 0;
  }
  
  ull sum = 0;
  
  for(size_t i = 0; i < size; i++){
    //printf("%c ", number[i]);
    sum += pow(number[i]-'0', i+1);
  }
  
  //printf("sum num %u %u\n", sum, num);
  
  if(sum==num){
    result = 0;
  }
  
  return result;
}

ull* sum_dig_pow(ull a, ull b, ull* results, size_t* length) {
  
  //printf("%u %u\n", a, b);
  
  size_t index = 0;
  
  for (ull i = a; i <= b; i++){
      if(isEureka(i)==0){
        results[*length] = (ull)i;
        (*length)++;
      }  
  }
  
  for(int i = 0; i < index; i++){
    //printf("%d ", results[i]);
  }
  
  return results;
}