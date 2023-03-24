//Practical 37
/*
Write a program to reverse string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[60];
    int l, g;
    printf("Enter : ");
    scanf( "%s", s );
    l = strlen(s);
    printf("Reverse : ");
    for(g = l - 1; g >= 0; g--) 
    {
        printf("%c", s[g]);        
    }
    return 0;
}
/*
Output :
        Enter : hello
        Reverse : olleh
*/