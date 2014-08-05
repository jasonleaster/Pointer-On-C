/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter thirteen programe exercise 1

 If somewhere in This code could be changed into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

//This exercise is help a lot to your study in pointer to function

#include<stdio.h>
#include<ctype.h>

int main ()
{
	int ch 	 		 = 0;
	int temp 		 = 0;
	int AllCharacter = 0;

	int counter[7] = {0};

    int(*CheckFunction[])(int character)=
	{
		iscntrl,
		isspace,
		isdigit,
		islower,
		isupper,
		isalpha,
		isprint
	};

	int (**test)(int character) = CheckFunction;

	for(test = CheckFunction;(ch = getchar())!=EOF;AllCharacter++)
	{
		for(temp = 0;temp<7;temp++)
		{
			if(test[temp](ch))
			{
				counter[temp]++;
			}
		}
	}

	counter[6] = AllCharacter - counter[6];
	
	for(temp = 0;temp<7;temp++)
	{
		printf("%d\n",counter[temp]);
	}
	return 0;
}
