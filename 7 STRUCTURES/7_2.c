//Practical 58
/*
Design a structure 
student_record to contain name, branch and total marks 
obtained. Develop a program to read data for 10 students in 
a class and print them.
*/
#include<stdio.h>
struct student_record
{
    char n[20];
    char b[20];
    int m;
};
int main()
{
    struct student_record s[10];
    int i;
    printf("Enter : \n");
    for ( i = 0; i < 1; i++)
    {
        printf("\t");
        scanf("%s %s %d",&s[i].n,&s[i].b,&s[i].m);
    }
    for ( i = 0; i < 1; i++)
    {
        printf("\t");
        printf("Name : %s\n\tBranch : %s\n\tMarks : %d\n",s[i].n,s[i].b,s[i].m);
    }
    return 0;
}
/*
Output : 
Enter : 
        A EC 100
        B IT 100
        C CSE 100
        D ME 100
        E EE 100
        F CV 100
        G EC 100
        H IT 100
        I CSE 100
        J ME 100
        Name : A
        Branch : EC
        Marks : 100
        Name : B
        Branch : IT
        Marks : 100
        Name : C
        Branch : CSE
        Marks : 100
        Name : D
        Branch : ME
        Marks : 100
        Name : E
        Branch : EE
        Marks : 100
        Name : F
        Branch : CV
        Marks : 100
        Name : G
        Branch : EC
        Marks : 100Name : H
        Branch : IT
        Marks : 100
        Name : I
        Branch : CSE
        Marks : 100
        Name : J
        Branch : ME
        Marks : 100
*/