/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 1

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct List
{
    struct List* next;
}*header,*now;

int Single(struct List* header);

int main ()
{
	int num  = 10;
	int temp = 0;

	header = (struct List*)malloc(sizeof(struct List));

	now = header;

	for(temp = 0;temp<num-1&&num>=1;temp++)
	{
		now->next = (struct List*)malloc(sizeof(struct List));
		now = now->next;
		if(temp == num-2)
		{
			now->next = NULL;
		}
	}

	printf("The number of the node in single list is :%d\n",Single(header));

	return 0;
}

int Single(struct List* header)
{
	int NumberOfNode = 0;
	struct List* test = header;
	for(NumberOfNode = 1;test->next != NULL;NumberOfNode++)
	{
		test = test->next;
	}
	return NumberOfNode;
}
