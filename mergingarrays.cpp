// C Program to merge two sorted arrays

#include<stdio.h>

void sort(int c[],int n3)
{
	for(int i=0;i<n3;i++)
	{
		int t;
		for(int j=i+1;j<n3;j++)
		{
			if(c[i]>c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
}

int main()
{
	int n1,n2,n3;
	
	printf("\nEnter the size of array1 : " );
	scanf("%d",&n1);
	printf("\nEnter the size of array2 : " );
	scanf("%d",&n2);
	
	n3=n1+n2;
	int a[n1],b[n2],c[n3];
	
	printf("\nEnter the elements of array1 : ");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n1);	
	int k=n1;
	
	printf("\nEnter the elements of array2 : ");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(b,n2);
	
	for(int i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	
	for(int j=0;j<n2;j++)
	{
		c[k]=b[j];
		k++;
	}
	
	printf("\nAfter Sorting: " );
	sort(c,n3);
	for(int i=0;i<n3;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
