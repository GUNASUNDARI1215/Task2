/*
   C program to find out the maximum and minimum of some values using function which will return an array.
   Input 5 values : 25 11 35 65 20
   Expected Output : Number of values you want to input : 5
                     Minimum value is : 11 & Maximum value is : 65
*/

#include<stdio.h>

int MinMax(int a[], int n)
{   
    int min,max,i;
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("\nMinimum Value is :%d",min);
	printf("\nMaximum Value is :%d",max);
}

int main()
{
	int arr[1000],i,n;
	
	printf("Input the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	MinMax(arr, n);
	return 0;
}
