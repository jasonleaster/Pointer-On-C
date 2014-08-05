/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 3


********************************************************************************/

#include<stdio.h>
int ascii_to_integer (char *string);
int main()
{
	char string[100];

	printf("Boy...Please enter a string and make sure the length \n of the string no more longer than 100 char\n\n");

	gets(string);

	printf("\n\nThe number in the string : %d\n",ascii_to_integer(string));

	return 0;
}
int ascii_to_integer (char *string)
{
	int counter = 0;
	int number  = 0;
	while(*(string++) != '\0')
	{
		if(*(string)<='9' && *(string)>='0')
		{
			for(counter = 0;(counter+'0')<'10';counter++)
			{
				if((counter+'0') == *(string))
				{
					number = number * 10 + counter;
				}
			}
		}
	}

	return number;
}
