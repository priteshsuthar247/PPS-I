//Practical 20
/*
Write a program to find out the sum of the first and 
last digit of a given number. 
*/
#include <stdio.h>
int main() 
{
  int no,sum=0;
  printf("Enter : ");
  scanf("%d",&no);
    if(no<10) 
    {
     sum = sum + (no*2);
    }
     else
    {
     sum = sum + (no%10);
     while(no>9)
    {
     no = no /10;
    }
     sum = sum + no;
    }
    printf("Sum of First & Last Digit is : %d",sum);
    return 0;
}
/*
Output :
        Enter : 543114
        Sum of First & Last Digit is : 9
*/