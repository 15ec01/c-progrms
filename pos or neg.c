#include <stdio.h>

int main(void) {
 
 int num;
 
 printf ("Enter a number \n");
 scanf ("%d", &num);
 
 if (num > 0) {
  
  printf ("You have entered positive number");
 
 } else if (num < 0) {
  
  printf ("You have entered negative number");
  
 } else {
  
  printf ("You have entered zero");
 }
 
 return 0;
}
