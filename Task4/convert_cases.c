/* C Program  to read a sentence and replace lowercase characters by uppercase and vice-versa
   Input the string: This is A Test String
   After case changed the string is : tHIS IS a tEST sTRING
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,size;
	
	printf("Enter the String : ");
	gets(str);
	
	size=strlen(str);
	
	for(i=0;i<=size;i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]=str[i]+32;                  //Converting UPPERCASE to lowercase
			
		else if(str[i]>=97 && str[i]<=122)
			str[i]=str[i]-32;	              //Converting lowercase to UPPERCASE
	}

    printf("After case changed the string is : %s ",str);
    
    return 0;
}
