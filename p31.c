//Practical 31
/*
Write a Program to perform addition of all 
elements in Array.
*/
#include<stdio.h>
int main()
{
    int a[5],sum=0;
    printf("Enter : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum : %d",sum);
    return 0;
}
/*
Output :
        Enter : 135 456 32186 87 16864
        Sum : 49728
*/