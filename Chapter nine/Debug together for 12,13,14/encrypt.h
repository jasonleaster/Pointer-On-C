/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdlib.h>
#include"mycode.h"
#include"ctype.h"
void encrypt(char* data,char const * key)
{
	int   temp    = 0;
	int   alph    = 0;
	int   counter = 0;
	char  ch      = 0;
	char alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	for(counter = 0;data[counter] != '\0';counter++)
	{
		ch = toupper(data[counter]);
		data[counter] = ch;//good skill
	}

	for (temp = 0;data[temp] != '\0';temp++)
	{
		for(alph = 0;alph<SIZEOFALPHABET;alph++)
		{
			if(data[temp] == alphabet[alph])
			{
				data[temp] = key[alph];
				break;
			}
		}
	}
}
