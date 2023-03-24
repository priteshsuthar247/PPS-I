//Practical 44
/*
Write a program to calculate sum of first 20 natural 
numbers using recursive function
*/
#include <stdio.h>
int f1(int n);
int main() 
{
  int a=20;
  printf("Sum = %d", f1(a));
  return 0;
}
int f1(int n) 
{
  if (n != 0)
    return n + f1(n - 1);
  else
    return n;
}
/*
Output :
        Sum = 210
*/