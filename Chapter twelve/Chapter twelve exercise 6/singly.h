/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 6 header file

 If somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#ifndef _SINGLY_H
	#define _SINGLY_H 1
#endif

#include<stdlib.h>
#define SIZEOFNODE 20

struct NODE
{
	int i_num;
	struct NODE* next;
	struct NODE* previous;
}*header,*last;

int CreatDoubleNODE(int Size)
{
	int temp = 0;
	struct NODE* This;
	struct NODE* pts;

	for(temp =0;temp < Size;temp++)
	{
		This = (struct NODE*)malloc(sizeof(struct NODE));// creat the next one node

		if(This == NULL)								//if the memory allocation does not success,then jump out of the function block
		{
			return 0;
		}

		if(temp == 0)									//copy_headerer pointer
		{
			header = This;
			This->previous = NULL;						//the copy_headerer pointer's previous pointer point to NULL
		}

		if(temp == Size-1)
		{
			last = This;								//the copy_last pointer
			last->next = NULL;							//the copy_last pointer's previous pointer point to NULL
		}

		This->i_num = temp+1;                           //any number is ok....I just like this

		if(temp==0)
		{
			pts = This;
		}
		else										 	//built double linked NODE
		{
			pts->next = This;
			This->previous = pts;
			pts  = This;
		}

		This = This->next;
	}

	return 1;
}
