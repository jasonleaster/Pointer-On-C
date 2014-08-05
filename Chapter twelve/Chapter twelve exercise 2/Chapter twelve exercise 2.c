/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 2

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
struct List* FindNumInList(struct List* header,int number);
int main ()
{
	int number = 0;
	printf("Please enter a number like 0 ,10 20 30 ...110...but no bigger than 190\n\n");
	
	while(!scanf("%d",&number))
	{
		printf("The data you entered is wrong!Please entered again!");
	}

	fun();

	printf("The number is in node:%p",FindNumInList(ps,number));
	
	return 0;
}
struct List* FindNumInList(struct List* header,int number)
{
	struct List* test = header;
	for(;test != NULL;)
	{
		if(test->i_number == number)
		{
			return test;
		}
		else
		{
			test = test->next;
		}
	}

	printf("Boy...These is not the number that you wanted!\n\n");

	return NULL;
}
