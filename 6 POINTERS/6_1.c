//Practical 48
/*
Write a program to print the address of a variable using a 
pointer. 
*/
#include<stdio.h>
int main()
{
    int a=0,*p;
    p=&a;
    printf("Address of %d is %p",a,p);
    return 0;
}
/*
Output :
        Address of 0 is 0061FF18
*/