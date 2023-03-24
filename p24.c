//Practical 24
/*
Write a C program to find 1+1/2+1/3+1/4+1/n. 
*/
#include<stdio.h>
int main() 
{
  int n, i; 
  float sum = 0;
  printf("Enter : ");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) 
  {
    sum = sum + (1.0 / i);
  }
  printf("Sum of Series = %.4f", sum);
  return 0;
}
/*
Output :
        Enter : 9
        Sum of Series = 2.8290
*/