/*******************************************************************************

 Code Writer :The . L;
 
 <Pointers On C>  Chapter Two programe exercise 

********************************************************************************/



/*
从标准输入读取C源代码，并验证所有的花括号都是成对出现的
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int signal = 0;
	int number = 0;
	char character =0;

	printf("\nNow , boy Please enter a string ,I will check\
whether the big brace is a couple!\n\n");

	while ( (character = getchar()) !='\n' )
	{
		if(character == '{')
		{
			signal = 1;
		}
		if(character == '}')
		{
			if(signal == 1)
			{
				signal = 0;
				number++;
			}
		}
	}
	printf("\n\nThere are %d couple big brace in the string that you entered !\n\n",number);
	system("pause");
	return 0;
}