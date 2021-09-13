/*
   C program to print the perfect numbers between given range using the function.
   Input lower search limit of perfect numbers:1
   Input highest search limit of perfect numbers:100
   Expected Output : Perfect Numbers between 1 and 100 : 6 28
*/
   
#include<stdio.h>

int perfect(int n1, int n2)
{
	int i,j,sum,a[1000];	
	for(i=n1;i<=n2;i++)
	{
	 sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
			sum=sum+j;	
			}
	    }
			if(sum==i)
			{
			
				printf("%d ",i);   
			}
	}
	
	return 0;	
}

int main()
{
  int start,end;
	printf("Enter the lowest limit : ");
	scanf("%d",&start);
	printf("\nEnter the highest limit : ");
	scanf("%d",&end);
	
	printf("\nThe Perfect Numbers between %d and %d :",start,end);
	perfect(start,end);
	
	return 0;
 	
}
