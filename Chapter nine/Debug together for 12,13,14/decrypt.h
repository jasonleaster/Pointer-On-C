/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include"mycode.h"
void decrypt(char* data,char const *key)
{
	int temp = 0;
	int alph = 0;
	char alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	for (temp = 0;data[temp] != '\0';temp++)
	{
		for(alph = 0;alph<SIZEOFALPHABET;alph++)
		{
			if(data[temp] == key[temp])
			{
				data[temp] = alphabet[alph];
			}
		}
	}
}
