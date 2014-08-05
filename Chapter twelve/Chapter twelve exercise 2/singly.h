/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 2 header file

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#ifndef _SINGLY_H
	#define _SINGLY_H 1
#endif

#include<stdlib.h>
#define SIZEOFLIST 20

struct List
{
	int i_number;
	struct List* next;
}*ps,*test;

int temp;
void fun()
{
    ps = (struct List*)malloc(sizeof(struct List));

    test = ps;

    for(temp = 0;temp<SIZEOFLIST;temp++)
    {
        test->next = (struct List*)malloc(sizeof(struct List));
        test = test->next;
    }

    test->next = NULL;


    test = ps;

    for(temp = 0;test != NULL;temp++)
    {
        test->i_number = temp*10;//any number is OK
        test = test->next;
	}
}
