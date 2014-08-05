/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter six programe exercise 3


********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define StringSize 100
void reverse_string(char* string);
int main ()
{
	char *String = (char *)malloc(StringSize*sizeof(char));
	printf("Please enter the  string and make sure the\
length of the string shorter than 100 characeter(include\
the empty charater)\n\n");

	if(String == NULL )
	{
		printf("The application for RAM failed!Process end.\n\n");
		return 0;
	}

	gets(String);

	printf("The string before reversing :%s\n\n",String);

	reverse_string(String);

	printf("The string after reversing  :%s\n\n",String);

	return 0;
}

void reverse_string(char* String)
{
	int number = 0;
	int temp   = 0;
	int counter= 0;
	for (number = 0;*(String+number) != '\0';number++)
	{
	}
    number--;
	if(number%2 == 0)
	{
		for(counter = 0;counter<number/2;counter++)
		{
			temp = *(String+number-counter);
			*(String+number-counter) = *(String+counter);
			*(String+counter) = temp;
		}
	}
	else
	{
		for(counter = 0;counter<number/2+1;counter++)
		{
			temp = *(String+number-counter);
			*(String+number-counter) = *(String+counter);
			*(String+counter) = temp;
		}
	}
}
