//Practical 3
/*
Write a program to calculate simple interest (i = (p*r*n)/100)
*/
#include <stdio.h>
int main()
{
    float p, r, n, i;
    printf("Enter Principle : ");
    scanf("%f", &p);
    printf("Enter number of years : ");
    scanf("%f", &n);
    printf("Enter rate : ");
    scanf("%f", &r);
    i = (p * r * n) / 100;
    printf("Your interest is : %f", i);
    return 0;
}
/*
Output :
        Enter Principle : 48616
        Enter number of years : 15
        Enter rate : 16
        Your interest is : 116678.398438
*/