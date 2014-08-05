/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 3

 If this code is somewhere could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
char* my_strcpy(char* StringOne,const char* StringTwo,int Size);
int main ()
{
	char a[20] = "hello world!";
	char b[20] = "hello Miss Dong";

	my_strcpy(a,b,20);
	printf("%s",a);

	return 0;
}

char* my_strcpy(char* StringOne,const char* StringTwo,int Size)
{
	strncpy(StringOne,StringTwo,Size);
	StringOne[Size-1] = '\0';

	return StringOne;
}
