#include <stdio.h>
#include <limits.h>

int main()
{
  printf("short int... \tsize: %d bytes \n", sizeof(short int));
  printf("short int... \t %d to %d \n", SHRT_MIN, SHRT_MAX);

  printf("long int... \tsize: %d bytes \n", sizeof(long int));
  printf("long int... \t %ld to %ld \n", LONG_MIN, LONG_MAX);
  
  printf("char... \tsize: %d byte \n", sizeof(char));
  printf("float... \tsize: %d bytes \n", sizeof(float));
  printf("double... \tsize: %d bytes \n", sizeof(double));

  return 0;
}