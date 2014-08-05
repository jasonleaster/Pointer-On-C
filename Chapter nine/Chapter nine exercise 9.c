/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 9

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
int count_char(char const* str,char const* chars);
int main()
{
    char n = 's';
	char Array[20] = {"Miss Dong"};

	printf("%d",count_char(Array,&n));
	return 0;
}

int count_char(char const* str,char const* chars)
{
	int temp = 0;
	int time = 0;
	for(temp = 0;str[temp] != '\0';temp++)
	{
		if( str[temp] == *chars)
		{
			time++;
		}
	}

	return time;
}
