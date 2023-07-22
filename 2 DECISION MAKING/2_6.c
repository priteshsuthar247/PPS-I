//Practical 14
/*
Write a C program to read no 1 to 7 and print 
relatively day Sunday to Saturday. 
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number from 1 to 7  : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
        break;
    case 3: printf("wednesday");
        break;
    case 4: printf("Thrusday");
        break;
    case 5: printf("Friday");
        break;
    case 6: printf("Satday");
        break;
    case 7: printf("Sunday");
        break;           
    default:printf("Invalid");
        break;
    }
    return 0;
}
/*
Output :
        Enter any number from 1 to 7  : 8
        Invalid
*/