//Practical 59
/*
Write a program to add two 
distances in feet and inches using structure
*/
#include<stdio.h>
struct distance
{
    int f;
    int i;
};
int main()
{
    struct distance d1, d2, s;
    printf("Enter : ");
    scanf("%d%d", &d1.f, &d1.i);
    printf("Enter : ");
    scanf("%d%d", &d2.f, &d2.i);
    s.i = d1.i + d2.i;
    s.f = d1.f + d2.f;
    if(s.i>=12)
    {
        s.f += s.i/12;
        s.i %= 12;
    }
    printf("Sum is %d' %d''", s.f, s.i);
    return 0;
}
/*
Output :
        Enter : 5 11
        Enter : 6 10
        Sum is 12' 9''
*/