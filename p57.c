//Practical 57
/*
Write a program to read structure elements from the keyboard.
*/
#include<stdio.h>
struct s
{
    int r;
    char n[20];
};
int main()
{
    struct s s1;
    printf("Roll No. : ");
    scanf("%d",&s1.r);
    printf("Name : ");
    scanf("%s",s1.n);
    return 0;
}
/*
Output :
        Roll No. : 22
        Name : KPGU   
*/