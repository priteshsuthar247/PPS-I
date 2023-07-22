//Practical 36
/*
Write a program to delete a character in a given 
string. 
*/
#include<stdio.h>
#include<string.h>
int main()
{
        char a[100],ch;
        int i,j;
        printf("Enter :");
        gets(a);
        printf("Delete :");
        scanf("%c",&ch);
        for(i=0;i<strlen(a);i++)
        {
                if(ch==a[i])
                {
                for(j=i;j<strlen(a);j++)
                a[j]=a[j+1];
                }
        }
        printf("New : ");
        puts(a);
        return 0;
}
/*
Output :
        Enter :hello world
        Delete :o
        New : hell wrld
*/