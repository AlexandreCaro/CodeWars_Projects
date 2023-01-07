#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*6 kyu*/

/*Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence,
which is the number of times you must multiply the digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)

*/

int persistence(int n) {

  char buffer[sizeof(int)*8+1];
  char new[20];
  char empty[] = "";
  
  int count = 0;
  
  sprintf(buffer,"%d", n);
  
  int temp = 1;
  
  while(strlen(buffer)>1){
  
    strcpy(new, empty);
  
    temp=1;
  
    for(size_t i = 0; i < strlen(buffer); i++){
      char digit;
      digit = *(buffer+i);
      temp *= atoi(&digit);
      
    }
    strcpy(buffer, empty);
    
    count++;
    sprintf(new, "%d", temp);
    strcpy(buffer, new);
  }
  
  return count;

}

/*CodeWars solution*/

int persistenceStar(int n) {

    int p = 1;
  
  if(n < 10){
    return 0;
  }
  
  while(n > 0){
    
    p = (n%10)*p;
    n /= 10;
    
    printf("%d %d\n", p, n);
    
  }
  
  return persistence(p)+1;

}