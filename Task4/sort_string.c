/* C Program to sort  a string array in ascending order
   Input the string: w3resource
   Expected output : After sorting the string appears like : 3ceeorrsuw
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],temp;
    int i,j,size;
    
    printf("Input the string : ");
	gets(str);
	size=strlen(str);
	
	for(i=1;i<size;i++)
  	{
  		for(j=0;j<size-i;j++)
  		{
  			if(str[j]>str[j+1])
			{
		  		temp=str[j];
		  		str[j]=str[j+1];
		  		str[j+1]=temp;
			}	
		}
  	}
   printf("After sorting the string appears like : %s",str);
   
   return 0;
}
  
