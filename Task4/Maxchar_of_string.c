/* c Program to find the maximum occuring character in a string.
   Input the string : Welcome to 3resource.com
   Expected output: The Highest frequency of character 'e' appears number of times : 4
*/

#include <stdio.h>
#define MAX_SIZE 100  
#define MAX_CHARS 255 

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; 
	int i=0,max,value;

    printf("Enter any string: ");
    gets(str);

// Set frequency of all characters as "0"
    for(i=0;i<MAX_CHARS;i++)
    {
        freq[i] = 0;
    }

//calculate frequency of each characters
    i=0;
    while(str[i]!='\0')
    {
        value=(int)str[i];
        freq[value] += 1;
        i++;
    }

//Find the maximum occuring character
    max=0;
    for(i=0; i<MAX_CHARS; i++)
    {
    	if(i!=32)
    	{
        	if(freq[i] > freq[max])
            	max=i;
        }
    }


    printf("The highest character '%c' appears number of times : %d",max,freq[max]);

    return 0;
}

