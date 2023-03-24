//Practical 1
/*
Write a program that works as a calculator (addition, multiplication, division, subtraction).
*/
#include<stdio.h>
int main()
{
    int a,b,addition,subraction,multiplication;
    float division;
    printf("Enter value of a: ");
    scanf("%d",& a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    addition=a+b;
    subraction=a-b;
    multiplication=a*b;
    division=a/b;
    printf("\nAddition :%d",addition);
    printf("\nSubraction :%d",subraction);
    printf("\nMultiplication :%d",multiplication);
    printf("\nDivision :%.2f",division);
    return 0;
}
/*
Output :
        Enter value of a: 5
        Enter value of b: 8
        Addition :13
        Subraction :-3
        Multiplication :40
        Division :0.00 
*/