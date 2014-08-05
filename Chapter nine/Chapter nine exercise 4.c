/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 4

 If this code is somewhere could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
char* my_strcat(char* StringOne,const char* StringTwo,int Size,int temp);
int main()
{
	char a[40] = "hello world!";
	char b[20] = "hello Miss Dong";

	my_strcat(a,b,15,16+12);
	//The number is very special and meaningful . I just want to ake the answer of the question cearly.Think about it and got it
	printf("%s",a);

	return 0;
}

char* my_strcat(char* StringOne,const char* StringTwo,int Size,int temp)
{
	strncat(StringOne,StringTwo,Size);
	StringOne[temp-1] = '\0';

	return StringOne;
}
