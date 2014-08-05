/*******************************************************************************

 Code Writer :The . L;
 
  <Pointers On C>  Chapter four programe exercise 5

********************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAXROW 100
#define MAX_str_LENGTH 100
int main ()
{
	int temp  	 = 0;
	int location = 0;
	int counter  = 0;
	int number   = 0;//The number of the same strs that are adjacent
	int NumberOfRow = 0;
	char str[MAXROW][MAX_str_LENGTH]    = {{'\0'}};
	char OutPut[MAXROW][MAX_str_LENGTH] = {{'\0'}};


	printf("Please enter some strs each end of \"Enter\" \n\
But the number of strs must smaller than 100 .You have \n\
to make sure the length of each str smaller than\
 100character !\n\n");

    while(gets(str[NumberOfRow])!='\0' &&(NumberOfRow<MAXROW))
	{
		NumberOfRow++;
	}

	for(temp = 0;(temp<MAXROW-1);temp++)
	{
		if(strcmp(str[temp],str[temp+1])==0)
		{
			for(location = temp,number = 1;strcmp(str[location],str[location+1])==0;location++)
			{
				number++;
			}

			if(number>0)
			{
				strcpy(OutPut[counter],str[temp]);
				temp +=number-1;//consider about temp++ ,so I put -1 there.....You know it is important
				counter++;
			}
		}
	}

	temp = 0;
	while(temp<counter)
	{
		printf("%s\n",OutPut[temp]);
		temp++;
	}

	return 0;
}
