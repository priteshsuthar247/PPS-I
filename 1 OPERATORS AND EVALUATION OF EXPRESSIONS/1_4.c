//Practical 4
/*
Write a C program to interchange two numbers with and without using third variable.
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of A after swapping : %d",a);
    printf("\nValue of B after swapping : %d",b);
    return 0;
}
/*
Output : 
        Enter value of A : 1
        Enter the value of B : 2
        Value of A after swapping : 2
        Value of B after swapping : 1
*/