//Practical 28
/*
Write a program to find out which number is even 
or odd from list of 10 numbers using array.
*/
#include<stdio.h>
int main()
{
    int i,a[10];
    printf("Enter : ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even : ");
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\nOdd : ");
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
/*
Output :
        Enter : 1 2 3 4 5 6 7 8 9 10
        Even : 2 4 6 8 10 
        Odd : 1 3 5 7 9
*/