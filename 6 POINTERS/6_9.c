//Practical 56
/*
Write a program for sorting using a pointer.
*/
#include <stdio.h>
int main()
{
	int a[5],*p[5],i,j,temp;
    printf("Enter : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        p[i]=&a[i];
    }
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*p[i]<*p[j])
			{
				temp=*p[i];
				*p[i]=*p[j];
				*p[j]=temp;
			}
		}
	}
	printf("Sorted : ");
	for(i=0;i<5;i++)
    {
        printf("%d ",*p[i]);
    }
	return 0;
}
/*
Output : 
        Enter : 53 13 46 123 564
        Sorted : 13 46 53 123 564 
*/