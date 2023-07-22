//Practical 9
/*
Write a C program to find that the accepted number is Negative or Positive or Zero.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d is Negative",n);
    }
    else if (n>0)
    {
        printf("%d is Positive",n);
    }
    else
    {
        printf("%d is Zero");
    }
    return 0;
}
/*
Output : 
        Enter : 24
        24 is Positive
*/