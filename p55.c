//Practical 55
/*
Write a program to access elements using a pointer
*/
#include<stdio.h>
int main()
{
    int a[5],*p[5],i;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Accessing using pointers : ");
    for ( i = 0; i < 5; i++)
    {
        p[i]=&a[i];
        printf("%d ",*p[i]);
    }
    return 0;
}
/*
Output :
        Enter : 1 2 3 4 5
        Accessing using pointers : 1 2 3 4 5 
*/