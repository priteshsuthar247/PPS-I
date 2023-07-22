//Practical 37
/*
Write a program to reverse string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[60];
    int l, i;
    printf("Enter : ");
    scanf( "%s", s );
    l = strlen(s);
    printf("Reverse : ");
    for(i = l - 1; i >= 0; i--) 
    {
        printf("%c", s[i]);        
    }
    return 0;
}
/*
Output :
        Enter : hello
        Reverse : olleh
*/