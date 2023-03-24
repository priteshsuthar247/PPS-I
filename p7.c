//Practical 7
/*
Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)
*/
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in Celsius : ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("%.2f Celcius = %.2f Fahrenheit",c,f);
    return 0;
}
/*
Output : 
        Enter temperature in Celsius : 278 
        278.00 Celcius = 532.40 Fahrenheit
*/