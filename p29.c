//Practical 29
/*
Write a program to find the maximum element 
from a one-Dimensional array.
*/
#include<stdio.h>
int main()
{
    int i,a[5],max=0;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum : %d",max);
    return 0;
}
/*
Output :
        Enter : 132 486 123 78 96
        Maximum : 486
*/