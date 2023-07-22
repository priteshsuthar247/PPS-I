//Practical 16
/*
Write a C program to input an integer number and 
check if the last digit of the number is even or odd. 
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any value : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The last digit is even");
    }
    else
    {
        printf("The last digit is odd");
    }
    return 0;
}
/*
Output :
        Enter any value : 8623
        The last digit is odd
*/