//Practical 66
/*
C Program to copy contents of one file to another file
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr1, *fptr2;
	char f[20], c;
	printf("Read : ");
	scanf("%s",&f);
	fptr1 = fopen(f, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", f);
		exit(0);
	}
	printf("Write : ");
	scanf("%s", f);
	fptr2 = fopen(f, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", f);
		exit(0);
	}
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}
	printf("Contents copied to %s", f);
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
/*
Output :
        Read : f1.txt
        Write : f2.txt 
        Contents copied to f2.txt
*/