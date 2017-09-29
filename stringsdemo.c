#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char string1[50];
  char string2[50];

  strcpy(string1,  "First String");
  strcpy(string2, "Second String");

  strcat(string2, string1);

  printf("strcat demo: [%s]\n", string2);
   
  char s1[50];
  char s2[50];

  strcpy(s1,  "First String");
  strcpy(s2, "Second String");

  strncat(s2, s1, 15);

  printf("strncat demo: [%s]\n", s2);

  return(0);
}
