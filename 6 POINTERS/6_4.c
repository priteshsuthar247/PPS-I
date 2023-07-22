//Practical 51
/*
Write a program to add two numbers using 
pointers.
*/
#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,*p1+*p2);
    return 0;
}
/*
Output :
        A : 2004
        B : 2023
        2004 + 2023 = 4027
*/