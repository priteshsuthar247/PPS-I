//Practical 41
/*
Write a function Exchange to interchange the 
values of two variables, say x and y illustrates the use of this 
function in a calling function.
*/
#include<stdio.h>
void f1(int,int);
int main()
{
    int a,b;
    printf("A : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);
    f1(a,b);
    return 0;
}
void f1(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping : ");
    printf("\nA : %d ",x);
    printf("\nB : %d",y);
}
/*
Output :
        A : 20
        B : 23
        After Swapping : 
        A : 23
        B : 20
*/