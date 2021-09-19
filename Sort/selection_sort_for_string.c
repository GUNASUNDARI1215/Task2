/* C Program to sort  a string array in ascending order using Selection Sort Algorithm
   Input the string: w3resource
   Expected output : After sorting the string appears like : 3ceeorrsuw
*/

#include <stdio.h>
#include <string.h>

void selectionsort(char A[], int size)
{
    int i,j,iMin,temp;
    
	for(i=0;i<(size-1);i++)
  	{
  		int iMin=i;
  		
  		for(j=i+1;j<size;j++)
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
}
  	
  	
int main()
{
    char str[100];
    int size;
    
    printf("Input the string : ");
	gets(str);
	
	size=strlen(str);	
	selectionsort(str,size);
    printf("After sorting the string appears like : %s",str);
   
    return 0;
}
  
