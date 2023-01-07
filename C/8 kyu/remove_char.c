#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char* dst, const char* src)
{
    /* your solution should return the string even if you use dst */
  
  int sizesrc = strlen(src);
  
  char* string = malloc(sizesrc);
  string[0] = '\0';
  
  int i = 0;
  
  while(src[i+1]){
    string[i] = src[i+1];
    i++;
  }
  
  string[i] = '\0';
  
  printf("%s", string);
  
  return string;
  
}