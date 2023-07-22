//Practical 22
/*
Write a program to check whether the given 
number is prime or not 
*/
#include <stdio.h> 
int main() 
{
  int n, i, c = 0;
  printf("Enter : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) 
  {
    if (n % i == 0) 
    {
      c++;
    }
  }
  if (c == 2) 
  {
    printf("%d is a Prime number",n);
  }
  else 
  {
    printf("%d is not a Prime number",n);
  }
  return 0;    
}
/*
Output :
        Enter : 13
        13 is a Prime number
*/