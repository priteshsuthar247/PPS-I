//Practical 47
/*
Write a function that will scan a character string 
passed as an argument and convert all lowercase character 
into their uppercase equivalents 
*/
#include<stdio.h>
#include<string.h>
void f1(char s[100]);
int main()
{
    char s[100];
    printf("\nEnter : ");
    gets(s);
    printf("Uppercase :");
    f1(s);
    return 0;
}
void f1(char s[100])
{
    puts(strupr(s));
}
/*
Output :
        Enter :hello
        Uppercase :HELLO
*/