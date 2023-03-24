//Practical 15
/*
Write a C program to find out the Maximum and 
Minimum number from given 10 numbers 
*/
#include <stdio.h>
int main() 
{
 int a[10],i,min,max;
 printf("Enter 10 Numbers : ");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
  if(i==0)
  {
   min=max=a[i];
  }
  else
  {
   if(min>a[i])
   {
    min=a[i];
   }
   if(max<a[i])
   {
    max=a[i];
   }
  }
 }
 printf("Minimum : %d",min);
 printf("\nMaximum : %d",max);
 return 0;
}
/*
Output :
        Enter 10 Numbers : 132 546 3184 864 846 89 123  315 789 123
        Minimum : 89
        Maximum : 3184
*/