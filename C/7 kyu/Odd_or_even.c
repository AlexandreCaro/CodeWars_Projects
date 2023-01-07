#include <stddef.h>

/*Task:

Given a list of integers, determine whether the sum of its elements is odd or even.

Give your answer as a string matching "odd" or "even".

If the input array is empty consider it as: [0] (array with a zero).
Examples:

Input: [0]
Output: "even"

Input: [0, 1, 4]
Output: "odd"

Input: [0, -1, -5]
Output: "even"

Have fun!
*/

const char *odd_or_even(const int *v, size_t sz) {
  
  int sum = 0;
  
  const char* string = "odd";
  
  for(size_t i =0; i < sz; i++){
    sum += v[i];
  }
  
  if(abs(sum)%2==0){
    string = "even";
    return string;
  } else if(abs(sum)%2==1){
    return string;
  }
}