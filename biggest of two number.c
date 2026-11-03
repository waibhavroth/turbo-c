#include<stdio.h>
#include<conio.h>
void main()
{
    
    int a;
    printf("Enter a first number : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter a second number : ");
    scanf("%d",&b);
    
    if(a>b){
        printf("%d is biggest of two number : ",a);
    }
    
    if(a<b){
        printf("%d is biggest of two number : ",b);
    }
    
getch();
}