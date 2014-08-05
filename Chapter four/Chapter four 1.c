/*******************************************************************************

 Code Writer :The . L;
 
  <Pointers On C>  Chapter four programe exercise 1

********************************************************************************/

#include<stdio.h>
int main()
{
	float number = 0;
	float answer = 1;
	int i = 0;
	printf("Please enter a number and I will try my best to \
figure out the ridical sign of the number\n");

	while(!scanf("%f",&number))
	{
		printf("The number that you have entered is not right,\
Please enter the number in your mind again!\n");
	}
	
	if(number<0)
	{
		printf("Cannot compute the square root of a negative number!\n");
		return 0;
	}

	for(i = 0;fabs(answer*answer-number)>1e-6;i++)//float类型的精度最高三小数点后6位
	{
		answer = (answer+(number/answer))/2;
		printf("The answer is %f\n",answer);
	}

	return 0;
}
