#include <stdio.h>

int main()
{
  int total ;
  enum SNOOKER 
  {
    RED=1, 
    YELLOW, 
    GREEN, 
    BROWN, 
    BLUE, 
    PINK, 
    BLACK 
  };

  printf("\nI potted a red worth %d\n", RED);
  printf("Then a black worth %d\n", BLACK);
  printf("Followed by another red worth %d\n", RED);
  printf("and finally a blue worth %d\n", BLUE);

  total = RED + BLACK + RED + BLUE;

  printf("\nAltogether I scored %d\n", total);
  return 0;
}