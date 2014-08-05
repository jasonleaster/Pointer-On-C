/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eleven programe exercise 4

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int temp = 0;

	struct A
	{
		int num;
		struct A* next;
	}*List,*p,*x;

	List = (struct A *)malloc(sizeof(struct A));

	for(temp = 0,p = List;temp<2;temp++)
	{
		p->next = (struct A *)malloc(sizeof(struct A));
		p = p->next;
	}

	p->next = NULL;

	for(temp = 0,p = List;temp<3;temp++)
	{
		p->num = (temp+1)*5;
		p = p->next;
	}

	for(temp = 0,p = List;temp<3;temp++)
	{
		printf("%d\t",p->num);
		p = p->next;
	}

    for(p = List,x = List;p != NULL ;)//A very useful skill in list data structure
	{
		p = x->next; 
		free(x); 
		x = p;  
	}

	return 0;
}
