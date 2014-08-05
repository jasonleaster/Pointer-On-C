/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 1


********************************************************************************/
#include<stdio.h>
int hermite(int n,int x);
int main()
{
	int n = 0;
	int x = 0;
	printf("Please enter two number.I will use  Hermite Polynomials figure it out....^_^\n\n");

	printf("\nPlease enter the number of n \n");

	while(!scanf("%d",&n))
	{
		printf("The data you entered is wrong ,please enter again !");
	}

	printf("\nPlease enter the number of x \n");

	while(!scanf("%d",&x))
	{
		printf("The data you entered is wrong ,please enter again !");
	}

	printf("The number after Hermite Polynomials is :%d\n\n",hermite(n,x));
	return 0;
}

int hermite(int n,int x)
{
	int answer = 0;

	if(n<=0)
	{
		return 1;
	}
	else if(n == 1)
	{
		return 2*x;
	}
	else
	{
		answer = 2*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x);
	}

	return answer;
}
