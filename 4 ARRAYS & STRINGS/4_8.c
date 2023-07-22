//Practical 34
/*
Write a program to find a character from a given 
string.
*/
#include<stdio.h>
int main()
{
    char a[20],s;
    int n=0;
    printf("Enter : ");
    gets(a);
    printf("Search : ");
    scanf("%c",&s);
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==s)
        {
            printf("Found %c at %d\n",s,i);
            n++;
        }
    }
    if (n==0)
    {
        printf("%c is not present",s);
    }
    return 0;
}
/*
Output :
        Enter : hello world
        Search : l
        Found l at 2
        Found l at 3
        Found l at 9
*/