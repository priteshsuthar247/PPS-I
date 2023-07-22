//Practical 49
/*
Write a C program to swap the two values using 

pointers.*/
#include<stdio.h>
int main()
{
    int a,b,c,*p1,*p2;
    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("Ater Swapping ");
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("\nA : %d",a);
    printf("\nB : %d",b);
    return 0;
}
/*
Output :
        A: 12
        B: 24
        Ater Swapping 
        A: 24
        B: 12
*/