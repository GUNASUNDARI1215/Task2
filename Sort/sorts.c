#include<stdio.h>


int BubbleSort(int A[], int n)
{
	int k,i,temp;
	for(k=1;k<n-1;k++)
	{
		for(i=0;i<n-2;i++)
		{
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;	
			}
		}
	}
	printf("\nAfter Bubble_Sorting: ");
	for(i=0;i<n;i++)
		printf("\n%d ",A[i]);
}

int InsertionSort(int A[], int n)
{
	int i,hole,value;
	for(i=1;i<n-1;i++);
	{
		value=A[i];
		hole=i;
		while(hole>0 &&  A[hole-1]>value)
		{
			A[hole]=A[hole-1];
			hole-1;
		}
		A[hole]=value;
	}
	printf("\nAfter Insertion_Sorting: ");
	for(i=0;i<n;i++)
		printf("\n%d ",A[i]);
}

void Selectionsort(int A[], int n)
{
    int i,j,iMin,temp;
    
	for(i=0;i<(n-1);i++)
  	{
  		int iMin=i;
  		
  		for(j=i+1;j<n;j++)
  		{
  			if(A[iMin]>A[j])
			{
				iMin=j;
		    }
	   }
	   if(iMin!=i)
	    {
			temp=A[i];
			A[i]=A[iMin];
	    	A[iMin]=temp;
		}
			
	}
	printf("\nAfter Selection_Sorting :");
	for(i=0;i<n;i++)
		printf("\n%d",A[i]);
}
  	

int main()
{
	int Arr[1000],size,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	printf("Enter the Array elements : ");
	for(i=0;i<size;i++)
		scanf("%d",&Arr[i]);
        
    BubbleSort(Arr,size);
    InsertionSort(Arr,size);
    Selectionsort(Arr,size);
    
	return 0;	
}
