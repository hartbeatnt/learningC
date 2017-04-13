#include <stdio.h>

int main () 
{
  int a = 4;
  int b = 8;
  int c = 1;
  int d = 1;

  printf("a = 4, b = 8, c = 1");
  printf("\n\n");
  printf("a + b:\t %d \n", a+b);
  printf("b - a:\t %d \n", b-a);
  printf("a * b:\t %d \n", a*b);
  printf("b / a:\t %d \n", b/a);
  printf("a %% b:\t %d \n", a%b);
  printf("\n\n");
  printf("c now:\t %d \n", c);
  printf("c++:\t %d \n", c++);
  printf("c now:\t %d \n", c);
  printf("++c:\t %d \n", ++c);
  printf("c now:\t %d \n", c);

  return 0;
}
