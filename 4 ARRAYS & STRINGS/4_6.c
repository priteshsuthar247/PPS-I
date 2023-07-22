//Practical 32
/*
Write a Program to reverse the array elements in C 
Programming.
*/
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversed : ");
    for ( i = 4; i>=0; i--)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
/*
Output :
        Enter : 46 456 345 8674 231
        Reversed :  231  8674  345  456  46 
*/