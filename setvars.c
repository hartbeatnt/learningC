#include <stdio.h>

int main()
{
  char letter;
  int num1, num2;

  printf("Enter any single keyboard character: ");
  scanf("%c", &letter);
  printf("Enter two integers separated by a space: ");
  scanf("%d %d", &num1, &num2);

  printf("Numbers input: %d and %d \n", num1, num2);
  printf("Letter input: %c \n", letter);
  printf("Letter stored at memory address \n %p \n", &letter);
  return 0;
}