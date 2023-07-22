//Practical 11_2
/*
Write a C program to check whether the 
entered character is capital, small letter, digit or any special 
character.
*/
#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter Any Character : ");
    scanf("%c", & ch);
    if (ch >= '0' && ch <= '9') 
    {
        printf("Entered Character is Digit");
    } 
    else if (ch >= 'A' && ch <= 'Z') 
    {
        printf("Entered Character is Capital Letter");
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        printf("Entered Character is Small Letter");
    } 
    else 
    {
        printf("Entered Character is Special Character");
    }
    return 0;
}
/*
Output : 
        Enter Any Character : @
        Entered Character is Special Character
*/