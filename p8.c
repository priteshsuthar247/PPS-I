//Practical 8
/*
Write a program to illustrate the use of unary prefix and postfix increment and decrement operators.
*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=1;
    b=1;
    c=1;
    d=1;
    printf("%d",++a);
    printf("\n%d",b++);
    printf("\n%d",++c);
    printf("\n%d",d++);
    return 0;
}
/*
Output : 
        2
        1
        2
        1
*/