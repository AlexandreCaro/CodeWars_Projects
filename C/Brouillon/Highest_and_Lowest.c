#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

/*7 kyu*/

void high_and_low (const char *strnum, char *result)
{
  
  long val;
  long min = LONG_MAX;
  long max = LONG_MIN;
  char *p;
  
  for(p = strnum; *p != '\0'; p++){
    printf("%s\n", p);
    val = strtol(p, &p, 10);

    if(val < min){
      printf("min ");
      min = val;
    } else if(val > max){
      printf("max ");
      max = val;
    }
  }
  
  printf("Numéro %d %d\n", max, min);
  
  sprintf(result, "%ld %ld", max, min);

}