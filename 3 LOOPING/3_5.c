//Practical 21
/*
Write a C program to find the sum and average of 
different numbers which are accepted by user as many as 
user wants 
*/
#include <stdio.h>
int main()
{
  int no,sum=0,i=0,val;
  printf("How Many Number You Want to Enter : ");
  scanf("%d",&no);
    while(i<no)
        {
          printf("Enter No [%d]:",i+1);
          scanf("%d",&val);
          sum=sum+val;
          i++;
        }
    printf("Sum = %d",sum);
    printf("\nAverage = %.2f",((float)sum)/no);
    return 0;
}
/*
Output :
        How Many Number You Want to Enter : 5
        Enter No [1]:2435
        Enter No [2]:12 
        Enter No [3]:54
        Enter No [4]:354
        Enter No [5]:1233
        Sum = 4088
        Average = 817.60
*/