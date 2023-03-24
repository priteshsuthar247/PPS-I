//Practical 35
/* 
Write a program to replace a character in a given 
string.
*/
#include <string.h>
#include<stdio.h>
int main()
{
    char s[20],c1,c2;
    printf("Enter : ");
    gets(s);
	printf("Find : ");
    c1=getchar();
    getchar();
    printf("Replace : ");
    c2=getchar();
    for(int i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
		   s[i]=c2;
	    }
	}
    printf("New : %s ",s);
    return 0;
}
/*
Output :
        Enter : hello world
        Find : o
        Replace : l
        New : helll wlrld
*/