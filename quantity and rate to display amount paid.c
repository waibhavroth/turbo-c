#include <stdio.h>
#include <conio.h>

void main() {
    int quantity = 5;     
    float rate = 45.50;   
    float amount;

    clrscr();

    amount = quantity * rate;

    printf("Quantity: %d\n", quantity);
    printf("Rate: %.2f\n", rate);
    printf("Total Amount Paid: %.2f\n", amount);

    getch();
}
