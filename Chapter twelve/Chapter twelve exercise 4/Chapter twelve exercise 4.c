/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 4

 If somewhere in This code could be changed into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
int DestroyList(struct List* copy_headerer);
struct List* sll_reverse(struct List * first);
int main()
{
	fun();
	
	DestroyList(sll_reverse(ps));	
	
	return 0;
}

struct List* sll_reverse(struct List * first)
{
	struct List* p1 = first;
	struct List* p2 = p1->next;
	struct List* p3 = p2->next;
	
	p1->next = NULL;
	for(;p3 != NULL;)
	{
		p2->next = p1;
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
	}
	p2->next = p1;
	return p2;
}


int DestroyList(struct List* copy_headerer)						//free the list
{
	struct List* test = copy_headerer;
	struct List* p;

	for(; test!= NULL;)
	{
	    printf("%d\t",test->i_num);							//just for testing
		p = test->next;
		free(test);
		test = p;
	}

	return 1;
}

