#include <string.h>
#include <stdio.h>


/*Given a string, you have to return a string in which each character (case-sensitive) is repeated once.
Examples (Input -> Output):

* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "

Good Luck!
*/
char* double_char (const char* string, char* doubled)
{
  
  char* result = doubled;
  
  while(*string){
    *doubled++ = *string;
    *doubled++ = *string++;
  }
  
  *doubled = '\0';
  
  return result;
}

/*Other solutions*/

char* double_char2 (const char *string, char *doubled)
{
  int k=0, i=0;
  
  while(string[i]!='\0'){
    doubled[k++] = string[i];
    doubled[k++] = string[i++];
  }
  
  doubled[k++] = '\0';
  
  return doubled;
}