//Practical 65
/*
C Program to print contents of file
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr;
	char f[20], c;
	printf("Enter : ");
	scanf("%s",&f);
	fptr = fopen(f, "r");
	if (fptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	c = fgetc(fptr);
	while (c != EOF)
	{
		printf ("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	return 0;
}