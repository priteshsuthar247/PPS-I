//Practical 46
/*
Write a program to find sum of digits of the number 
using Recursive Function.
*/
#include <stdio.h>
int f1(int a);
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    printf("Sum of %d is %d", n, f1(n));
    return 0;
}
int f1(int n)
{
    if (n != 0)
        return (n % 10 + f1(n / 10));
    else
       return 0;
}
/*
Output :
        Enter : 7585
        Sum of 7585 is 25
*/