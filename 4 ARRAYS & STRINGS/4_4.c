//Practical 30
/*
Write a Program to Search an element in array.
*/
#include<stdio.h>
int main()
{
    int a[5],i,x,n=0;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Serach : ");
    scanf("%d",&x);
    for ( i = 0; i < 5; i++)
    {
        if (a[i]==x)
        {
            printf("Found %d at %d\n",x,i);
            n++;
        }
    }
    if (n==0)
    {
        printf("Unsuccesfull Search");
    }
    return 0;
}
/*
Output : 
        Enter : 123 486 486 231 48
        Serach : 486
        Found 486 at 1
        Found 486 at 2
*/