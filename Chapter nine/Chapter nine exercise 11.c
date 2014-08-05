/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 11

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
int counter(char* str);
int main()
{
	int temp = 0;
	char str[100] = {0};

	printf("Please enter a string and I will count the number of the word--'the' \n\
Make sure the number of characters smaller than 100\n");

	gets(str);

	for(temp  = 0;str[temp] != '\0';temp++)
	{
		if(temp==100)
		{
			printf("The string is longer than 100 character!The process of the programe end!\n");
			return 0;
		}
	}

	printf("%d",counter(str));
	
	return 0;
}

int counter(char* str)
{
	int temp = 0;
	int num  = 0;

	if(str[0]=='t' && str[1]=='h' && str[2]== 'e')												//check about whether is the string start with 'the'
	{
		num++;
	}
	
	for(temp = 0;temp<96 && str[temp+3] != '\0';temp++)
	{
		if(str[temp] == ' ' && str[temp+1] == 't'&& str[temp+2] == 'h' && str[temp+3] == 'e')
		{
			num++;
		}
	}

	return num;
}
