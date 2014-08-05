/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 2

 If this code is somewhere could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
unsigned int my_strlen (char* String,int length);
int main ()
{
	printf("The length of the string: %u\n",my_strlen ("hello world",11));//You could change '11' ,if you do that ,you will understand this function better
	return 0;
}

unsigned int my_strlen (char* String,int length)
{
	int temp = 0;
	for (temp = 0;temp<length;temp++)
	{
		if(*(String+temp) == '\0')
		{
			break;
		}
	}
	return temp;
}

