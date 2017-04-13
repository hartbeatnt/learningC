#include <stdio.h>

#define LINE "__________________________"
#define TITLE "Rye Whiskey and WiFi"
#define AUTHOR "Nathaniel T. Hart"

#ifdef _WIN32
#define SYSTEM "Windows 32"
#endif

int main()
{
  printf("\n \t %s \n \t %s \n", LINE, TITLE);
  printf("\t by %s \n \t %s \n", AUTHOR, LINE);
  printf("\n Operating System: %s \n", SYSTEM);

  return 0;
}