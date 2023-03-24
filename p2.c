//Practical 2
/*
Write a program to find area of triangle
*/
#include<stdio.h>
int main()
{
    float a,h,b;
    printf("Enter height : ");
    scanf("%f",&h);
    printf("Enter base : ");
    scanf("%f",&b);
    a=b*h*0.5;
    printf("Area of Triangle = %.2f",a);
    return 0;
}
/*
Output :
        Enter height : 5
        Enter base : 9
        Area of Triangle = 22.50
*/