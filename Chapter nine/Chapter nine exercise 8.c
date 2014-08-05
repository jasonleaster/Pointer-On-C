/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 8

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
char* my_strnchr(char const* str,int ch,int which);
int main()
{
	char Array[20] = {"Miss Dong"};

	printf("%s",my_strnchr(Array,'s',2));

	return 0;
}

char* my_strnchr(char const* str,int ch,int which)
{
	int temp = 0;
	int time = 0;
	for(temp = 0;str[temp] != '\0';temp++)
	{
		if(time == which)
		{
		    temp--;
			return (char*)str+temp;
		}

		if( str[temp] == ch)
		{
			time++;
		}
	}

	return NULL;
}
