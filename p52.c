//Practical 52
/*
Write a program to input and print array elements 
using pointer.
*/
#include<stdio.h>
int main()
{
    int a[5],*p1=a,i;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&p1[i]);
    }
    printf("Array : ");    
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",p1[i]);
    }
    return 0;
}
/*
Output :
        Enter : 123 465 8 132 456
        Array : 123 465 8 132 456
*/