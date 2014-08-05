/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 4


********************************************************************************/

#include<stdio.h>
#include<stdarg.h>
int max_list (int NumberOfParameter,...);
int main ()
{
	int number = 0;
	int temp   = 0;
	int I_array[10] = {0};
	printf("There is a available variabel parameter\n\
list for the undefined parameter in the function.You also\n\
should enter a integer number for the first parameter.\n");

	while(!scanf("%d",&number))
	{
		printf("Please enter again !The data you entered is wrong!");
	}

	printf("\n\nThe Max number in the parameter list is : %d\n",max_list(number,1,2,3,4,5,6,7,-1));
// In fact,there is nothing connection between the variable number and the first parameter in the max_list function

	return 0;
}

int max_list(int NumberOfParameter,...)
{
	va_list ParameterList;

	int MaxNumber = 0;

	int temp = 1;

	va_start(ParameterList,NumberOfParameter);

	for(;temp>0;)
	{
		MaxNumber = MaxNumber > temp ? MaxNumber : temp;

        temp = va_arg(ParameterList,int);
	}

	va_end(ParameterList);

	return MaxNumber;
}
