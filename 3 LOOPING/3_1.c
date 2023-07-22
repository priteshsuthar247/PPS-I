//Practical 17
/*
Write a C program to find the factorial of a given 
number. 
*/
#include<stdio.h>
int main()
{
    int i,f,n;
    f=1;
    printf("Enter : ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is : %d",n,f);
    return 0;
}
/*
Output :
        Enter : 9
        Factorial of 9 is : 362880
*/