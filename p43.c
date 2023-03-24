//Practical 43
/*
Write a program to find the factorial of a number 
using recursion.
*/
#include<stdio.h>
long int f1(int a);
int main() 
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, f1(n));
    return 0;
}
long int f1(int a) 
{
    if (a>=1)
        return a*f1(a-1);
    else
        return 1;
}
/*
Output :
        Enter : 13
        Factorial of 13 = 1932053504
*/