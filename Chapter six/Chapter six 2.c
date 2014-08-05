/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter six programe exercise 2


********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define StringSize 100
int del_substr(char *str,char const *substr);
int main ()
{
	char *StringOne = (char *)malloc(StringSize*sizeof(char));
	char *StringTwo = (char *)malloc(StringSize*sizeof(char));
	
	/*
	if(StringOne==NULL || StringTwo == NULL)
	{
		printf("The application for RAM failed!Process end.\n\n");
		return 0;
	}
	*/
	
	printf("Please enter the first string and make sure the\
length of the string shorter than 100 characeter(include\
the empty charater)\n\n");

	gets(StringOne);

	printf("Please enter the second  string and make sure the \
length of the string shorter than 100 characeter(include \
the empty charater)\n\n");

	gets(StringTwo);

	del_substr(StringOne,StringTwo);

	getchar();

	free(StringOne);
	free(StringTwo);
	StringOne = NULL;
	StringTwo = NULL;

    return 0;
}

int del_substr(char *str,char const *substr)
{
	int temp	= 0;
	int counter = 0;
	int signal  = 0;

	if(str == NULL || substr== NULL)
    {
        return 0;
    }

	for (temp = 0;*(str+temp) != '\0';temp++)
	{
		if(*(str+temp) == *(substr))
		{
			for(counter = 0; *(substr+counter) != '\0' && *(str+temp+counter) == *(substr+counter);counter++)
			{
			}

			if(*(substr+counter) == '\0')
			{
				signal = 1;							//make sure the str have all the character in substr
			}
		}

		if(signal==1)
		{
			break;
		}
	}

	if(signal == 1)
	{
		for (;*(str+temp) != '\0';temp++)
		{
			*(str+temp) = *(str+temp+counter);
		}
		*(str+temp) = '\0';

		for (temp = 0;*(str+temp) != '\0';temp++)
		{
			printf("%c",*(str+temp));
		}
		return 1;
	}


	return 0;
}
