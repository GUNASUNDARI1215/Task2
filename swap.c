/*
  C program to swap elements using call by reference.
  Input the value of : first element - 5, second element - 6, third element - 7
  Expected Output : The value before swapping are : Element1=5, Element2=6, Element3=7
                    The value after swapping are : Element1=7, Element2=5, Element3=6
*/

#include<stdio.h>

void swap(int *n1, int *n2, int *n3)
{
	int temp;
	temp=*n2;
	*n2=*n1;
	*n1=*n3;
	*n3=temp;	
}

int main()
{
	int element1,element2,element3;
	
	printf("Input the value of first element : ");
	scanf("%d",&element1);
	printf("\nInput the value of second element : ");
	scanf("%d",&element2);
	printf("\nEnter the value of third element : ");
	scanf("%d",&element3);

//Before Swapping	
	printf("\nThe values before swapping are : ");
	printf("\nElement1=%d \nElement2=%d \nElement3=%d ",element1,element2,element3);

//After Swapping	
	swap(&element1,&element2,&element3);
	printf("\nThe values after swapping are : ");
	printf("\nElement1=%d \nElement2=%d \nElement3=%d ",element1,element2,element3);
	
	return 0;
}
