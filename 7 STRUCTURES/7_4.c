//Practical 60
/*
Write a program to read and print 
an Employee‟s Details using Structure.
*/
#include <stdio.h>
struct emp
{
    char n[20];
    int id;
    float s;
};
int main()
{
    struct emp e;
    printf("Enter : ");
    scanf("%s %d %f",&e.n,&e.id,&e.s);
    printf("Name : %s\n",e.n);
    printf("Id : %d\n",e.id);
    printf("Salary : %.0f\n",e.s);
    return 0;
}
/*
Output :
        Enter : A 22 9999999
        Name : A
        Id : 22
        Salary : 9999999.000000
*/