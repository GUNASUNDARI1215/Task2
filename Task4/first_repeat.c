/* c program to find the first repeated character in a given string
   Input a string : w3resource
   Expected Output : The first repetitive character in w3resource is : r
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char firstRepeatedChar;
	int i,j,found=0,size;
	
	printf("Enter a string : ");
	gets(str);
	size=strlen(str);
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(str[i]==str[j])
			{
				firstRepeatedChar=str[i];
				found=1;
				break;
			}
		}
		if(found==1)
			break;
	}
	if(found==1)
		printf("The First repeated character in %s is : %c  ",str,firstRepeatedChar);
	else
		printf("No repeated character is found in this string");
		
		
	return 0;
}
