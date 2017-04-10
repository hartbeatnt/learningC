#include <stdio.h>

int main()
{
  int arr[3];

  arr[0] = 100;
  arr[1] = 200;
  arr[2] = 300;
  char str[] = {'T','e','s','t','\0'};

  printf("1st element value: \t %d \n", arr[0]);
  printf("2nd element value: \t %d \n", arr[1]);
  printf("3rd element value: \t %d \n", arr[2]);
  printf("String: \t \t %s", str)  ;

  return 0;
}