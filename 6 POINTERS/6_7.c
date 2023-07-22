//Practical 54
/*
Write a program to swap two arrays using pointers.
*/
#include<stdio.h>
int main()
{
    int a[5],b[5],*p1[5],*p2[5],temp;
    printf("A : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("B : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("After Swapping\nA :\t\tB :\n");
    for (int i = 0; i < 5; i++)
    {
        p1[i]=&a[i];
        p2[i]=&b[i];
        temp=*p1[i];
        *p1[i]=*p2[i];
        *p2[i]=temp;
        printf("%4d\t\t%4d\n",a[i],b[i]);
    }
    return 0;
}
/*
Output :
        A : 1 1 1 1 1
        B : 2 2 2 2 2
        After Swapping
        A :             B :
            2               1
            2               1
            2               1
            2               1
            2               1
*/