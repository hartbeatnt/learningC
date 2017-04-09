#include <stdio.h>

int main()
{
  float num = 5.75;
  char letter = 'A';
  int zee = 90;
  int x = 7;
  int y = 5;
  double decimal = 0.123456789;

  printf("Float cast to int: %d \n", (int)num);
  printf("char cast to int: %d \n", (int)letter);
  printf("Int cast to char: %c \n", (char)zee);
  printf("Float arithmetic: %f \n", (float)x / (float)y);
  printf("Double cast to float: %f \n", (float)decimal);

  return 0;
}