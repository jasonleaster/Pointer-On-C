/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter nine programe exercise 14

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include"myfunction.h"
#include"mycode.h"
#include"prepare_key.h"
#include"encrypt.h"
#include"decrypt.h"
int main ()
{
	char String[100] 	  = {0};
	char OriginalCode[100] = {0};

	printf("Boy ...Please enter a key for the code system!\n");
	gets(String);

	if(prepare_key(String))
	{
		printf("The encoding process finished!\n");
	}
	else
	{
		printf("The encoding process failed!\n");
	}

	printf("\n\nBoy...Please enter the string that you want to code\n\n");

	gets(OriginalCode);

	printf("\nThe Orignal code before coded: %s\n",OriginalCode);

	encrypt(OriginalCode,answer);

	printf("\nThe Orignal code after coded: %s\n",OriginalCode);

	printf("Now ,Let's decode the code\n");

	decrypt(OriginalCode,answer);

	return 0;
}
