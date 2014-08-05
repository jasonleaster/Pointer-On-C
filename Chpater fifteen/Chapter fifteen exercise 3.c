/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 3

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#define BUFFERSZIE 10
int main ()
{
	char buf[BUFFERSZIE];

	while(fgets(buf,BUFFERSZIE-1,stdin) != NULL)
	{
		fputs(buf,stdout);
	}

	return 0;
}
