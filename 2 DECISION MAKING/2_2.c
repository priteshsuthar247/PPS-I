//Practical 10
/*
Write a program to read marks of a student from keyboard whether the student is pass or fail( using if else)
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    if (n>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
/*
Output : 
        Enter : 33
        Pass
*/