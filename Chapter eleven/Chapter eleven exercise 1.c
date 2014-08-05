/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eleven programe exercise 1

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void* my_calloc(int size,int num);

int main ()
{
	char* String =NULL;
	int   Size   = 10;
	int   num	 = 1;
	int   temp   = 0;
	String = (char*)my_calloc(Size,num);

	while((String[temp] = getchar())!= EOF)
	{
		temp++;
	}

	if(temp>=num*Size-1)
    {
        String[num*Size-1] = '\0';
    }
    else
    {
        String[temp+1] = '\0';
    }

	puts(String);

	free(String);
	return 0;
}

void* my_calloc(int size,int num)
{
	void* pointer = (void*)malloc(size*num*sizeof(char));
	return pointer;
}
