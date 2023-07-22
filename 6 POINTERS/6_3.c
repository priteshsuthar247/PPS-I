//Practical 50
/*
Write a C program to print the address of a 
character and the character of string using a pointer.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],s,*p1[20];
    int n=0,i;
    printf("Enter : ");
    gets(a);
    printf("Search : ");
    scanf("%c",&s);
    for( i = 0; i < strlen(a); i++)
    {
        p1[i]=&a[i];
    }
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==s)
        {
            printf("Address of %c is %p\n",*p1[i],p1[i]);
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
        Enter: hello
        Search: l
        Address of l is 0061FF06
        Address of l is 0061FF07
*/