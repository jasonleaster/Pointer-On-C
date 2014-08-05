/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter twelve programe exercise 6

 If somewhere in This code could be changed into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include"singly.h"

int dll_remove(struct NODE* rootp,struct NODE *node);
int DestroyList(struct NODE* copy_headerer);

int main ()
{	
	CreatDoubleNODE(20);

	struct NODE* test = header;

	for(;test != NULL;test = test->next)
	{
		if(test->i_num == 7)
		{
			dll_remove(header,test);
			break;
		}
	}

	DestroyList(header);

	return 0;
}

int dll_remove(struct NODE* rootp,struct NODE *node)
{
	struct NODE* test = rootp->next;
	
	for(;test != NULL;)
	{
		if(test == node)
		{
			rootp->next = node->next;
			node->next->previous = node->previous;
			free(node);
			return 1;
		}
		else
		{
			rootp = rootp->next;
			test = test->next;
		}
	}
	
	return 0;
}

int DestroyList(struct NODE* copy_headerer)						//free the list
{
	struct NODE* test = copy_headerer;
	struct NODE* p;

	for(; test!= NULL;)
	{
	    printf("%d\t",test->i_num);							//just for testing
		p = test->next;
		free(test);
		test = p;
	}

	return 1;
}