#include <stdio.h>

int main()
{
  const float PI = 3.141593;
  float diameter;
  float radius;
  float circ;
  float area;

  printf("Enter the diameter of a circle in millimeters: ");
  scanf("%f", &diameter);

  circ = PI * diameter;
  radius = diameter / 2;
  area = PI * (radius * radius);

  printf("\n\tCircumference is %.2f mm", circ);
  printf("\n\tArea is %.2f square mm\n", area);

  return 0;
}