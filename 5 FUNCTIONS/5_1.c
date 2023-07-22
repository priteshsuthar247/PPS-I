//Practical 39
/*
Write a program that defines a 
function to add first n numbers.
*/
#include<stdio.h>
int sum(int x);
int main()
{
    int x;
    printf("Enter : ");
    scanf("%d",&x);
    printf("Sum of first %d Numbers = %d",x,sum(x));
    return 0;
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
/*
Output :
        Enter : 5
        Sum of first 5 Numbers = 15
*/