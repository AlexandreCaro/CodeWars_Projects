#include <stddef.h>
#include <stdio.h>


/*Enough is enough!

6 kyu

Task

Given a list and a number, create a new list that contains each number of list at most N times, without reordering.
For example if the input number is 2, and the input list is [1,2,3,1,2,1,2,3], you take [1,2,3,1,2], drop the next [1,2] since this would lead to 1 and 2 being in the result 3 times, and then take 3, which leads to [1,2,3,1,2,3].
With list [20,37,20,21] and number 1, the result would be [20,37,21].

For C:

    Assign the return array length to the pointer parameter *szout.
    Do not mutate the input array.

*/


//  return a dynamically allocated int array
//  the return array will be freed by tester
//  set *szout to the length of output array

int* delete_nth(size_t szin, const int order[szin], int max_e, size_t* szout) {
  
  int max = 0;

  size_t length = 0;
  
  printf("TIMES %d\n", max_e);
  
  printf("Original:");

  for(size_t i = 0; i < szin; i++){
    if(max < order[i]){
      max = order[i];
    }
    printf("%d ", order[i]);
  }
  
  printf("\n");
  
  int array[max];
  
  for(size_t j = 0; j < max; j++){
    array[j] = 0;
  }
  
  int* out = malloc(szin*sizeof(int));
  
  for(size_t i = 0; i < szin; i++){
    if(array[order[i]] < max_e){
      //printf("%d ", array[order[i]]);
      out[length] = order[i];
      length++;
      array[order[i]]++;
    }
    
  }
  
  for(size_t i = 0; i < length; i++){
    printf("%d " , out[i]);
  }
  
  printf("\n");
  
  *szout = length;
  
  return out;

}