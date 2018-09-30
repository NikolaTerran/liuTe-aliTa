#include <stdio.h>
#include <stdlib.h>
#include "mystringlib.h"
/* add function headers below */

int main(){

  char str1[] = "hello";
  char str2[] = "hey";
  char str3[] = "hello";
  char str4[] = "abcdefg";
  char str5[] = "gfedc";
/* demo strlen */
  printf("length of str1: %d\n", mystrlen(str1));
  printf("length of str2: %d\n", mystrlen(str2));
/* demo strcpy */
  printf("Before copy\n");
  printf("str1: %s, str2: %s\n", str1, str2);
  mystrcpy(str1, str2);
  printf("After copy\n");
  printf("str1: %s, str2: %s\n", str1, str2);

/* demo strcat */

/* demo strcmp */ 
  printf("Compare %s and %s\n",str1,str2);
  printf("%d\n", mystrcmp(str1,str2));
  printf("Compare %s and %s\n",str1,str4);
  printf("%d\n", mystrcmp(str1,str4));
  printf("Compare %s and %s\n",str5,str1);
  printf("%d\n", mystrcmp(str1,str5));
/* demo strchr */
  printf("The address of \'%c\' in \"%s\"",'y',str1);
  printf("%p\n",mystrchr(str1,'y'));
  printf("Deref that address the we get\n");
  printf("%c\n",*mystrchr(str1,'y'));


/*Extra************************************************************/

/* demo strstr */

/* demo strncpy */

/* demo strncat */

return 0;

}
