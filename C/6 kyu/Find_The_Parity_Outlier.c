#include <stdlib.h>
#include <math.h>

/*You are given an array (which will have a length of at least 3, but could be very large) containing integers.
The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N.
Write a method that takes the array as an argument and returns this "outlier" N.

Examples

[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)

*/

int find_outlier(const int* values, size_t count){
  
  int bufferOdd[count];
  int bufferEven[count];
  
  int odd = 0;
  int even = 0;
  
  for(size_t i = 0; i < count; i++){
    if(abs(values[i])%2==0){
      bufferEven[even] = values[i];
      even++;
    } else if(abs(values[i])%2==1){
      bufferOdd[odd] = values[i];
      odd++;
    }
  }
  
  if(odd == 1){
    return bufferOdd[0];
  } else if(even == 1){
    return bufferEven[0];
  }
};