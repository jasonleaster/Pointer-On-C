/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 1

 If this code is somewhere could change into better condition,please touch me. 
 
 E-mail:liuzijianlinux@gmail.com
 
 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<ctype.h>
void percentage(char* ch ,int message[]);
int main ()
{
	int message [7] = {0};
	percentage("hello world",message);
	printf("The number of control     character:%d\n",message[0]);
	printf("The number of space       character:%d\n",message[1]);
	printf("The number of digit       character:%d\n",message[2]);
	printf("The number of lower       character:%d\n",message[3]);
	printf("The number of upper       character:%d\n",message[4]);
	printf("The number of punctuation character:%d\n",message[5]);
	printf("The number of unable to be print character:%d\n",message[6]);
	getchar();
	return 0;
}

void percentage(char* ch ,int message[])
{
	int temp = 0;
	message[2] = -1;
	for(temp = 0;*ch !='\0';temp++)
	{
		if(iscntrl(*ch))
		{
			message[0]++;
		}

		if(isspace(*ch))
		{
			message[1]++;
		}

		if(isdigit(*ch)||isxdigit(*ch))
		{
			message[2]++;
		}

		if(islower(*ch))
		{
			message[3]++;
		}

		if(isupper(*ch))
		{
			message[4]++;
		}

		if(ispunct(*ch))
		{
			message[5]++;
		}

		if(!isprint(*ch))
		{
			message[6]++;
		}
		ch++;
	}
	message[2] -=  message[1];
}
