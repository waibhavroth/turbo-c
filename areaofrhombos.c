#include <stdio.h>
#include <conio.h>

int main() {
float d1, d2, area;

clrscr();

printf("Enter the length of the first diagonal (d1): ");
scanf("%f", &d1);

printf("Enter the length of the second diagonal (d2): ");
scanf("%f", &d2);

area = (d1 * d2) / 2.0;

printf("The Area of the Rhombus is: %.2f square units", area);

    
getch(); 
}
