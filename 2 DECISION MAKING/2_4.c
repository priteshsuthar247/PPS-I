//Practical 12
/*
Write a program to read marks from keyboard and 
your program should display equivalent grade according to 
following table(if else ladder) 
Marks Grade 
100 - 80 Distinction 
79 - 60 First Class 
59 - 40 Second Class 
< 40 Fail
*/
#include<stdio.h>
int main()
{
    int m;
    printf("Enter Marks :");
    scanf("%d",&m);
    if(m<=100 && m>=80)
    {
        printf("Distinction");
    }
    else if(m<=79 && m>=60)
    {
        printf("First Class");
    }
    else if(m<=59 && m>=40)
    {
        printf("Second Class");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
/*
Output : 
        Enter Marks :86
        Distinction
*/