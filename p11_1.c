//Practical 11_1
/*
Write a program to read three numbers from the 
keyboard and find out the maximum out of these three. 
(Nested if else).
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is the largest number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest number",b);
    }
    else if (c>a && c>b)
    {
        printf("%d is the largest number",c);
    }
    else
    {
        printf("All are equal");
    }
    return 0;
}
/*
Output : 
        Enter three numbers : 56 789 12
        789 is the largest number
*/