/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 5 header file

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
}*ps,*test;

int temp;
void fun()
{
    ps = (struct NODE*)malloc(sizeof(struct NODE));

    test = ps;

    for(temp = 0;temp<SIZEOFNODE;temp++)
    {
        test->next = (struct NODE*)malloc(sizeof(struct NODE));
        test = test->next;
    }

    test->next = NULL;


    test = ps;

    for(temp = 0;test != NULL;temp++)
    {
        test->i_num = temp*10;//any number is OK
        test = test->next;
	}
}

