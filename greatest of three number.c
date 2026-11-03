#include<stdio.h>
#include<conio.h>
void main()
{
    
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    int b;
    printf("Enter a second number : ");
    scanf("%d",&b);
    
    int c;
    printf("Enter a third number : ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("%d is greatest of three ",a);
    }
    
    if(b>a && b>c){
        printf("%d is greatest of three ",b);
    }
    
    if(c>a && c>b){
        printf("%d is greatest of three ",c);
    }
    
    
    
    
getch();
}
