#include <stdio.h>
#include <stdlib.h>
#include "mystringlib.h"
/* add function headers below */

int main(){

  char str1[] = "hello";
  char str2[] = "hey";
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

/* demo strchr */

/*Extra************************************************************/

/* demo strstr */

/* demo strncpy */

/* demo strncat */

return 0;

}
