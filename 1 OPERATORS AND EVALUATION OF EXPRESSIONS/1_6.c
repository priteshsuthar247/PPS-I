//Practical 6
/*
Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches and centimetre 
*/
#include<stdio.h>
int main()
{
    int a;
    float m,f,i,c;
    printf("Enter distance (in KM) : ");
    scanf("%d",&a);
    m=a*1000;
    f=a*3280.84;
    i=a*39370.1;
    c=a*100000;
    printf("Meter : %.2f",m);
    printf("\nFeet : %.2f",f);
    printf("\nInch : %.2f",i);
    printf("\nCentimeter : %.2f",c);
    return 0;
}
/*
Output : 
        Enter distance (in KM) : 534
        Meter : 534000.00
        Feet : 1751968.50
        Inch : 21023634.00
        Centimeter : 53400000.00
*/
