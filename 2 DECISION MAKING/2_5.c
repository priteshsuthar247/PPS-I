//Practical 13
/*
Write a C program to prepare payslips using the 
following data. Da = 10% of basic, Hra = 7.50% of basic, Ma = 
300, 
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = 
Gross – Pf. 
*/
#include<stdio.h>
int main()
{
    float basic,da,hra,ma,pf,gross,net;
    printf("Enter value of basic : ");
    scanf("%f",&basic);
    da=0.10*basic;
    hra=0.075*basic;
    ma=300;
    pf=0.125*basic;
    printf("da = %f \nhra = %f \nma = %f \npf = %f"
             ,da,hra,ma,pf);
    gross=basic+da+hra+ma;
    net=gross-pf;
    printf("\ngross = %f \nnet = %f",gross,net);
    return 0;
}
/*
Output :
        Enter value of basic : 6847
        da = 684.700012 
        hra = 513.525024
        ma = 300.000000
        pf = 855.875000
        gross = 8345.224609
        net = 7489.349609
*/