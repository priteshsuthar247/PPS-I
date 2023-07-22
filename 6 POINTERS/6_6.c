//Practical 53
/*
Write a program to copy one array to another using 
pointer.
*/
#include<stdio.h>
int main()  
{
    int a[5], b[5], i, *p[5]; 
    printf("Enter : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Copyied to b : ");
    for(i = 0; i < 5 ; i++)
    {
        p[i] = &a[i];
        b[i] = *p[i];
        printf("%d ", b[i]);
    }
    return 0;
}
/*
Output :
        Enter : 1 2 3 4 5
        Copyied to b : 1 2 3 4 5
*/