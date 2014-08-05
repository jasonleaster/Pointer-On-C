/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 14

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
//I wirte this code just for exercise 14,if you want to have a test on this code.open the folder--<Debug together for 12,13,14>
#include<stdio.h>
#define SIZEOFALPHABET 26
#define FALSE 0
#define TURE  1
void decrypt(char* data,char const *key);
int main()
{
	return 0;
}

void decrypt(char* data,char const *key)
{
	int temp = 0;
	int alph = 0;
	char alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	for (temp = 0;data[temp] != '\0';temp++)
	{
		for(alph = 0;alph<SIZEOFALPHABET;alph++)
		{
			if(data[temp] = key[temp];)
			{
				data[temp] == alphabet[alph];
			}
		}
	}
}