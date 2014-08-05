/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eleven programe exercise 3

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
char* ReadString(void);

int main ()
{
	char * temp;

	temp = (char*)ReadString();

	puts(temp);

	free(temp);

	return 0;
}

char* ReadString(void)
{
	char* String = (char*) malloc(sizeof(char));
	char* OP	 = String;//Original pointer
	int num = 1;
	while((String[num-1] = getchar())!= '\n')
	{
        String = (char*)realloc(String,(++num)*sizeof(char));
    }

	return OP;
}
