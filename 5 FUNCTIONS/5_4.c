//Practical 42
/*
Write a C program to check whether a number is 
prime, Armstrong or perfect number using functions.
*/
#include<stdio.h>
void f1(int);
void f2(int);
void f3(int);
int main() 
{
    int a;
    printf("Enter : ");
    scanf("%d",&a);
    f1(a);
    f2(a);
    f3(a);
    return 0;    
}
void f1(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
        c++;
        }
    }
    if (c == 2) 
    {
        printf("%d is a Prime Number.",n);
    }
    else 
    {
        printf("%d is not a Prime Number.",n);
    }
}
void f2(int x)
{
    int temp, rem, re = 0;
    temp = x;
    while (temp != 0) 
    {
        rem = temp % 10;
        re += rem * rem * rem;
        temp /= 10;
    }
    if (re == x)
    {
        printf("\n%d is an Armstrong Number.", x);
    }
    else
    {
        printf("\n%d is not an Armstrong Number.", x);
    }
}
void f3(int y)
{
    int rem, sum = 0, i;
    for(i = 1; i < y; i++)
    {  
        rem = y % i;  
        if (rem == 0)
        {  
            sum = sum + i;  
        }  
    }  
    if (sum == y)
    {
        printf("\n%d is a Perfect Number.",y);
    }
    else
    {
    printf("\n%d is not a Perfect Number.",y);  
    }
}
/*
Output : 
        Enter : 13
        13 is a Prime Number.
        13 is not an Armstrong Number.
        13 is not a Perfect Number.
*/