/*
  C program to check is Armstrong&Perfect numbers using the function
  Input any number : 371
  Expected Output : 371 is an Armstrong number & 371 is not an perfect number
*/

#include<stdio.h>

int Armstrong(int n1)
{
	int l,sum,q;
	sum=0;
	q=n1;
	while(q!=0)
	{
		l=q%10;
		sum+=l*l*l;
		q=q/10;		
	}
	return(n1==sum);
}

int Perfect(int n1)
{
	int i,s,n,rem;
	s=0;
	n=n1;
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			s+=i;
		}
	}
	return(n1==s);
}

int main()
{
	int n1;
	printf("Enter a number : ");
	scanf("%d",&n1);
		
	if(Armstrong(n1))
		printf("\n%d is an Armstrong Number",n1);
	else
		printf("\n%d is not an Armstrong Number",n1);
		
		
	if(Perfect(n1))	
		printf("\n%d is an Perfect Number",n1);
	else
		printf("\n%d is not an Perfect number" ,n1);
    return 0;	
}
