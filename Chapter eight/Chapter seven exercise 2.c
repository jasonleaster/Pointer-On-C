/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 2


********************************************************************************/
#include<stdio.h>
float single_tax (float income);

int main ()
{
	float income = 0;
	printf("Sir,Please enter your income.\n\
I will figure out the number of the tax that you should turn in.\n\n");

	while(!scanf("%f",&income))
	{
		printf("The data you entered is wrong.Please enter again!");
	}

	printf("Your single tax is : %f",single_tax(income));

	return 0;
}

float single_tax (float income)
{
	if(income <0)
	{
		printf("The income can not be nagetive number.The data is wrong!");
		return 0;
	}

	if(income<23350)
	{
		return income*0.15;
	}
	else if(income<56550)
	{
		return 3502.5+0.28*(income-23350);
	}
	else if(income<117950)
	{
		return 12798.5+0.31*(income-56550);
	}
	else if(income<256500)
	{
		return 31832.5+0.36*(income-117950);
	}
	else
	{
		return 81710.5+0.396*(income-256500);
	}
	return 0;
}
