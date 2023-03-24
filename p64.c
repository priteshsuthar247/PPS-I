//Practical 64
/*
C Program to count number of lines in a file
*/
#include <stdio.h>
int main()
{
    FILE *fptr;
    int ctr = 0;  
    char fname[20];
    char c; 
	printf("Enter : ");
	scanf("%s",fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("%s not found", fname);
        return 0;
    }
    for (c = getc(fptr); c != EOF; c = getc(fptr))
    {
        if (c == '\n')
        {
            ctr = ctr + 1;
        }
    }
    fclose(fptr);
    printf("%s has %d lines", fname, ctr-1);
    return 0;
}
/*
Output :
        Enter : p63.c
        p63.c has 59 lines
*/