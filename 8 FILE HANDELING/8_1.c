//Practical 62
/*
Write a program to write a string in file
*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char s[20];
    FILE *fptr;
    fptr = fopen("f1.txt", "w");
    if (fptr == NULL) 
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter : ");
    fgets(s, sizeof(s), stdin);
    fprintf(fptr, "%s", s);
    fclose(fptr);
    return 0;
}
/*
Output :
        Enter : Hello World
*/