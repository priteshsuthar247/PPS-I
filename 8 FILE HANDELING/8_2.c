//Practical 63
/*
A file named data contains a series of integer 
numbers. Write a c program to read all numbers from a file 
and then write all odd numbers into a file named “odd” and 
write all even numbers into a file named “even”. Display all 
the contents of these file on screen
*/
#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int num,i,n=10;
    printf("Data : ");
    f1 = fopen("data.txt","w");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num==-1)
        {
          break;
        }
        putw(num,f1);
    }
    fclose(f1);
    f1 = fopen("data.txt","r");
    f2 = fopen("Odd.txt","w");
    f3 = fopen("Even.txt","w");
    while((num = getw(f1)) != EOF)
    {
        if(num%2==0)
        {
            putw(num,f3);
        }
        else
        {
            putw(num,f2);
        }
        }
        fclose(f1);
        fclose(f2);
        fclose(f3);
        f2 = fopen("Odd.txt","r");
        f3 = fopen("Even.txt","r");
        printf("Odd : ");
        while((num = getw(f2)) != EOF)
        {
            printf("%d ",num);
        }
        printf("\nEven : ");
        while((num = getw(f3)) != EOF)
        {
            printf("%d ",num);
        }
        fclose(f2);
        fclose(f3);
        return 0;
}
/*
Output : 
        Data : 0 1 2 3 4 5 6 7 8 9
        Odd : 1 3 5 7 9 
        Even : 0 2 4 6 8
*/