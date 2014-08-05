/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 2


********************************************************************************/

#include<stdio.h>
int gcd(int M,int N);
int main()
{
	int M = 0;
	int N = 0;
	printf("Please enter two number .I will help you to figure out M%%N.Make\
sure your number all are positive!");

	printf("\n\nPlease enter the value of M\n");
	while(!scanf("%d",&M))
	{
		printf("The data you entered is wrong ,please enter again !\n\n");
	}

	printf("Please enter the value of N\n");
	while(!scanf("%d",&N))
	{
		printf("The data you entered is wrong ,please enter again !\n\n");
	}
    printf("The data after process: %d\n",gcd(M,N));
	return 0;
}

int gcd(int M,int N)
{
	if(M<0 || N<0)
	{
		return 0;
	}

	if(M%N == 0)
	{
		return N;
	}
	else if(M%N>0)
	{
		return M%N;
	}
	return 1;
}
