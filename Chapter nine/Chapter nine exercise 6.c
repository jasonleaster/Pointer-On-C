/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 6

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
char* my_strcpy_end(char* StringOne,const char* StringTwo);
int main()
{
	char a[40] = "hello world!";
	char b[20] = "hello Miss Dong";

	//The number is very special and meaningful . I just want to ake the answer of the question cearly.Think about it and got it
	printf("%s",my_strcpy_end(a,b));
	return 0;
}

char* my_strcpy_end(char* StringOne,const char* StringTwo)
{
	int temp = 0;
	for (temp = 0;*(StringTwo) !='\0';temp++)
	{
		*(StringOne++) = *(StringTwo++);
	}

	return StringOne;
}
