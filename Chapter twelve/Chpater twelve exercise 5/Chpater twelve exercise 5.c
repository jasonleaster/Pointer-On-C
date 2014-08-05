/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter twelve programe exercise 5

 If somewhere in This code could be changed into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
int sll_remove (struct NODE**rootp,struct NODE*node);
int main()
{
	return 0;
}

int sll_remove (struct NODE**rootp,struct NODE*node)
{
	struct NODE* test = (*rootp);

	if((*rootp)==node)
	{
		(*rootp) = (*rootp)->next;
		free(test);
	}
	else
	{
		for(;(*rootp)!= NULL;(*rootp) = (*rootp)->next)
		{
			if((*rootp)->next == node)
			{
				(*rootp)->next = node->next;
				free((*rootp)->next);
				return 1;
			}
		}
	}

	return 0;
}
