#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*7 kyu*/

/*An isogram is a word that has no repeating letters, consecutive or non-consecutive.
Implement a function that determines whether a string that contains only letters is an isogram.
Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)

isIsogram "Dermatoglyphics" = true
isIsogram "moose" = false
isIsogram "aba" = false

*/

bool IsIsogram (const char* string) 
{
  int len = strlen(string);
  
  if(len==1){
    return true;
  }
  
  char* ptr;
  
  char lowerCase[len];
  
  for(size_t i = 0; i < len; i++){
    lowerCase[i] = tolower(string[i]);
  }
  
  for(size_t i =0; i < len; i++){
    ptr = strchr(&lowerCase[i+1], lowerCase[i]);
    if(ptr!=NULL){
      return false;
    }
  }
  
  printf("%s", lowerCase);
  
  return true;
}

/*Codewars Solution*/

bool IsIsogramNew (const char *string) 
{
    char cache[26]={0};
    for(int i=0; string[i]!=0;++i){
      char c = tolower(string[i]) - 'a';
      if(cache[c]) return false;
      cache[c] = 1;
    }
  
  return string[0] == 0 || true;
}