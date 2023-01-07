#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*7 kyu*/

/*Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers.
No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

/*My Solution*/

int compare(const void* a, const void* b){
  return *(int*)a - *(int*)b;
}

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
  
  long newNumbers[n];
  
  for(size_t i = 0; i < n; i++){
    newNumbers[i] = numbers[i];
  }

    qsort(newNumbers, n, sizeof(long), compare);
  
  for(size_t i = 0; i < n; i++){
    printf("%d", newNumbers[i]);
  }
  
  long sum = newNumbers[0] + newNumbers[1];
  
  return sum;

}

/*CodeWars Solution*/

#include <stddef.h>
#include <limits.h>

long sum_two_smallest_numbersNew(size_t n, const int numbers[n]) {

    long small1 = INT_MAX, small2 = INT_MAX;
  
    for(size_t i = 0; i < n; i++){
      if(numbers[i] < small1){
        small2 = small1;
        small1 = numbers[i];
        
      } else if(numbers[i] < small2) small2 = numbers[i];
    }
  
  return small1 + small2;

}