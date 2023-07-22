//Practical 18
/*
Write a program to reverse a number.
*/
#include<stdio.h>
int main()
{
    int n,re,rem;
    re=0;
    printf("Enter : ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        re=re*10+rem;
        n/=10;
    }
    printf("Reversed : %d",re);
    return 0;
}
/*
Output : 
        Enter : 7585
        Reversed : 5857
*/