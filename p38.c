//Practical 38
/*
Write a program to convert string into upper case
*/
#include<stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    int i;
    printf("Enter : ");
    gets(s);
    for (i = 0; s[i]!='\0'; i++) 
    {
        if(s[i] >= 'a' && s[i] <= 'z') 
        {
            s[i] = s[i] -32;
        }
    }
    printf("Upper Case = %s", s);
    return 0;
}
/*
Output :
        Enter : hElLo
        Upper Case = HELLO
*/