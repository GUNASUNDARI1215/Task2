// C Program to find the first repeated character in the given array

#include<stdio.h>
int main()
{
	char str[100];
	char firstRepeatedChar;
	int i,j,found=0;
	
	printf("Enter the string : ");
	gets(str);
	
	for(i=1;str[i]!='\0';i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
				found=1;
				firstRepeatedChar=str[i];
				break;
		}
		if(found==1)
			break;
	}
	
	if(found==1)
		printf("The first Repeated character is : %c ",firstRepeatedChar);
	else
		printf("No repetitive character found in the string");
	
	return 0;
	
}
