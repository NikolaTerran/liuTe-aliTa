# include <stdio.h>
int length(char *s){
  int i;
  for(i=0; *s; i++, s++);
  return i;
}
  
  
    
