#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/*6 kyu*/

int* sort(int* arr, size_t n){
  
  int temp = 0;
  
  for(int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
        if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
            }
        }
    }
  
  return arr;
}

/*Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements,
with the same multiplicities (the multiplicity of a member is the number of times it appears). "Same" means, here, that the elements in b 
are the elements in a squared, regardless of the order.
Examples
Valid arrays

a = [121, 144, 19, 161, 19, 144, 19, 11]  
b = [121, 14641, 20736, 361, 25921, 361, 20736, 361]

comp(a, b) returns true because in b 121 is the square of 11, 14641 is the square of 121, 20736 the square of 144, 361 the square of 19,
25921 the square of 161, and so on. It gets obvious if we write b's elements in terms of squares:

a = [121, 144, 19, 161, 19, 144, 19, 11] 
b = [11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19]

Invalid arrays

If, for example, we change the first number to something else, comp is not returning true anymore:

a = [121, 144, 19, 161, 19, 144, 19, 11]  
b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]

comp(a,b) returns false because in b 132 is not the square of any number of a.

a = [121, 144, 19, 161, 19, 144, 19, 11]  
b = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]

comp(a,b) returns false because in b 36100 is not the square of any number of a.*/

bool comp(const int* a, const int* b, size_t n)
{
  if(n==0){
    return true;
  }
  
  int* arr1 = sort(a, n);
  int * arr2 = sort(b, n);
  
  
    for(size_t i = 0; i < n; i++){
      if(arr2[i]==arr1[i]*arr1[i]){
        continue;
      } else {
        return false;
      }
    }
  
  return true;
}

/*Other solution:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define true  1
#define false 0

int abscmp(const void *a, const void *b) {
  return abs(*((int *)a)) - abs(*((int *)b));
}
bool comp2(int *a, int *b, size_t n) {
  qsort(a, n, sizeof(int), abscmp);
  qsort(b, n, sizeof(int), abscmp);
  for (int i = 0; i < n; i++) if (*(a + i) * *(a + i) != *(b + i)) return false;
  return true;
}