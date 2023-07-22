//Practical 23
/*
Write a program to evaluate the series 
1^2+2^2+3^2+……+n^2 
*/
#include<stdio.h>
int main() 
{
  int n, i,sum = 0;
  printf("Enter : ");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) 
  {
    sum = sum + (i*i);
  }
  printf("Sum of Series = %d", sum);
  return 0;
}
/*
Output :
        Enter : 18
        Sum of Series = 2109
*/