#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*6 kyu*/

/*You will be given a number and you will need to return it as a string in Expanded Form. For example:

expandedForm 12    -- Should return '10 + 2'
expandedForm 42    -- Should return '40 + 2'
expandedForm 70304 -- Should return '70000 + 300 + 4'

NOTE: All numbers will be whole numbers greater than 0.*/

char* add_char_to_string(char* str, char c) {
  size_t len = strlen(str);
  char* new_str = malloc((len + 2) * sizeof(char));
  strcpy(new_str, str);
  new_str[len] = c;
  new_str[len + 1] = '\0';
  return new_str;
}

char* expandedForm(char* string, unsigned long long n)
{
	// write to string and return it
	// it has enough room for a trailing "+ "
  
  printf("Before %s\n", string);
  
  sprintf(string, "%d", n);
  
  size_t size = strlen(string);
  
  char* copy[size];
  
  for(int i=0; i < size; i++){
    copy[i] = malloc(2*sizeof(char));
    copy[i][0]='\0';
  }
  
  int index = 0;
  
  for(int i=0; i < size; i++){
    printf("%c ", string[i]);
  }
  
  char zero = '0';
  
  char c = '\0';
  
  for(int i = 0; i < size; i++){
    if(string[i] != '0'){
      
      copy[index] = add_char_to_string(copy[index], string[i]);
      //printf("i %d %s", i, copy[index]);
    
      for(int j = 1; j < size - i; j++){
        
        copy[index] = add_char_to_string(copy[index], '0');
        
      }  
      index++;
    }
  }
  
  for(size_t i = 0; i < index; i++){
    printf("%s", copy[index]);
  }
  
	*string = '\0';
	return copy;
}