#include <stdio.h>
#include <conio.h>

int main() {
int num1, num2;

clrscr();

printf("Enter two numbers to compare:\n");
scanf("%d %d", &num1, &num2);

if (num1 > num2) {
printf("\n%d is the biggest number.", num1);
} 
else if (num2 > num1) {
printf("\n%d is the biggest number.", num2);
 } 

getch();
}
