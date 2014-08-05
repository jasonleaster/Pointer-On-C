/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eleven programe exercise 2

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void ReadNumber(void);

int main ()
{
	ReadNumber();
	return 0;
}

void ReadNumber(void)
{
	int* String =NULL;
	int   num	 = 0;
	int   temp   = 0;

	while(!scanf("%d",&num))
	{
		printf("The data you entered is wrong!");
	}

    num++;

	String = (int*)malloc((num)*sizeof(int));

	(*String) = num-1;

	for( temp = 1;temp<num && scanf("%d",&String[temp]);temp++)
	{

	}

    printf("\n");

	for(temp = 0;temp<num;temp++)
	{
		printf("%d\t",String[temp]);
	}

	free(String);
}
