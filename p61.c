//Practical 61
/*
Write a program to declare, 
initialize an UNION.
*/
#include <stdio.h>
union u 
{
    int r;
    char n[20];
};
int main()
{
    union u u1;
    printf("Roll No. : ");
    scanf("%d",&u1.r);
    printf("Name : ");
    scanf("%s",u1.n);
    return 0;
}
/*
Ouput :
        Roll No. : 22
        Name : KPGU
*/