/* C Program to count the number of punctuation characters exists in a string
   Input a String : The quick brown  fox, jumps over the,lazy dog.
   Expected output : The punctuation characters exists in the string is : 3
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,size,c=0;
	
	printf("Enter the String : ");
	gets(str);
	
	size=strlen(str);
	
	for(i=0;i<size;i++)
	{
		if( (str[i]>=33 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=125) )
			c++;                  
	}

    printf("The punctuation characters exists in the string is : %d ",c);
    
    return 0;
}
