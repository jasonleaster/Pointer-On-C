/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 10

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define TURE  1
#define FALSE 0
int palindrome(char*String);
int main()
{
	char Array[20] = {"A B BB\n \t A"};

	printf("%d",palindrome(Array));
	return 0;
}

int palindrome(char*String)
{
	int temp = 0;
	int label= 0;
	int chars= 0;

	for(temp =0;String[temp];temp++)
	{
		String[temp] = tolower(String[temp]);						//change all the character into lower character
	}

	for(temp =0;String[temp]!='\0';temp++)
	{
		if(islower(String[temp]))									//figure out all the lower characters
		{
			chars++;
		}
	}

	char * str = (char*)malloc(chars*sizeof(char));					//apply for some RAM that would be used in store up the characters in the String

	for(temp =0,label = chars;String[temp]!='\0';temp++)
	{
		if(islower(String[temp]))
		{
			str[label-1] = String[temp];
			label--;
		}
	}
	
	for(temp = 0;temp<(chars/2);temp++)								//check the string whether it is palindrome
	{
		if(str[temp] != str[chars-1-temp])
		{
			return FALSE;
		}
	}

	free(str);														//Do not forget this most important step,free the RAM

	return TURE;
}
