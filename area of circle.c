#include <stdio.h>
#include <conio.h>

void main() {
float radius = 5.0;
float area;

clrscr();

area = 3.14159 * radius * radius;
printf("Radius of the circle = %.2f\n", radius);
printf("Area of the circle   = %.2f\n", area);

getch();
}
