//Practical 5
/*
Write a program to display the size of every data type using “sizeof” operator.
*/
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Size of Int : %d bytes",sizeof(a));
    printf("\nSize of Float : %d bytes",sizeof(b));
    printf("\nSize of Character : %d bytes",sizeof(c));
    return 0;
}
/*
Output : 
        Size of Int : 2 bytes
        Size of Float : 4 bytes
        Size of Character : 1 bytes
*/