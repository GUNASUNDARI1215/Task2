/*
   C Program to find the factorial of a given number using pointers.
   Input a number : 5
   Expected Output : The factorial of 5 is : 120
*/

#include<stdio.h>
 
void findFactorial(int ,long int * );

int main()
{
  long int factorial;
  int num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  findFactorial(num,&factorial);
  printf("The Factorial of %d is: %d",num,factorial);
 
  return 0;
}
 
void findFactorial(int n,long int *factorial)
{
    int i;
    *factorial =1;
 
    for(i=1;i<=n;i++)
    *factorial=*factorial*i;
}
