#include <stdio.h>
#include <conio.h>

void main() {
    float hours = 45.5;
    float rate = 15.75; 
    float payment;
    clrscr();

    payment = hours * rate;

    printf("Total Hours Worked : %.2f hours\n", hours);
    printf("Hourly Pay Rate    : $%.2f per hour\n", rate);
    printf("Total Gross Payment: $%.2f\n", payment);

    getch();
}
