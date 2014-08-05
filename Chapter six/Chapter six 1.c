/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter six programe exercise 1
 

********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define StringSize 100
char* find_char(char const *source,char const *chars);
int main ()
{
	char *StringOne = (char *)malloc(StringSize*sizeof(char));
	char *StringTwo = (char *)malloc(StringSize*sizeof(char));
	
	if(StringOne==NULL || StringTwo == NULL)
	{
		printf("The application for RAM failed!Process end.\n\n");
		return 0;
	}
	
	printf("Please enter the first string and make sure the\
length of the string shorter than 100 characeter(include\
the empty charater)\n\n");

	gets(StringOne);

	printf("Please enter the second  string and make sure the \
length of the string shorter than 100 characeter(include \
the empty charater)\n\n");

	gets(StringTwo);

	printf("%c\n",*(find_char(StringOne,StringTwo)));

	free(StringOne);
	free(StringTwo);
	StringOne = NULL;
	StringTwo = NULL;
    return 0;
}

char* find_char(char const *source,char const *chars)
{
	int temp	= 0;
	int counter = 0;
	char *ret	=NULL;
	if(source == NULL || chars== NULL)
    {
        return NULL;
    }
	for (temp = 0;*(source+temp) != '\0';temp++)
	{
		for(counter = 0;*(chars+counter) != '\0';counter++)
		{
			if(*(source+temp) == *(chars+counter))
			{
				ret = chars+counter;
				return ret;
			}
		}
	}
	return NULL;
}
