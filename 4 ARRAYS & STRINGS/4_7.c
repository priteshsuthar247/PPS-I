//Practical 33
/*
Write a Program for deletion of an element from 
the specified location from Array. 
*/
#include<stdio.h>
int main ()
{
    int a[5],s,i;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Delete : ");
    scanf("%d",&s);
    for ( i = s; i < 5; i++)
    {
            a[i]=a[i+1];
            a[i+1]=a[i]; 
    }
    printf("New : ");
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
/*
Output :
        Enter : 54 86 132 78 5341
        Delete : 2
        New : 54 86 78 5341
*/