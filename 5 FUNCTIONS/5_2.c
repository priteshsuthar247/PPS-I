//Practical 40
/*
Write a function in the program to return 1 if 
number is prime otherwise return 0 
*/
#include <stdio.h>
int f1(int);
int main() 
{
    int n;
    printf("Enter : ");
    scanf("%d", & n);
    printf("%d", f1(n));
    return 0;
}
int f1(int n) 
{
    int i;
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
        return 0;
        }
    }
    return 1;
}
/*
Output :
        Enter : 13
        1
*/