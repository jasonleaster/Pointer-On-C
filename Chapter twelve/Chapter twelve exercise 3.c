/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter twelve programe exercise 2

 If somewhere in This code could be changed into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct List
{
	int    i_num;
	double d_num;
	struct List* next;
	struct List* previous;
}*header,*last;

int CreatDoubleList(int Size);
int DestroyList(struct List* copy_headerer);
int DoubelListInsert(struct List*copy_header,struct List* copy_last,int number);

int main()
{
    CreatDoubleList(6);

    DoubelListInsert(header,last,4);

    DestroyList(header);

	return 0;
}

int CreatDoubleList(int Size)
{
	int temp = 0;
	struct List* This;
	struct List* pts;

	for(temp =0;temp < Size;temp++)
	{
		This = (struct List*)malloc(sizeof(struct List));// creat the next one node

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
		else										 	//built double linked list
		{
			pts->next = This;
			This->previous = pts;
			pts  = This;
		}

		This = This->next;
	}

	return 1;
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


int DoubelListInsert(struct List*copy_header,struct List* copy_last,int number)			//use the doubel linked list to search the right place in two direction
{
	struct List* forward_This  = copy_header;
	struct List* forward_previous;

	struct List* backward_This = copy_last;
	struct List* backward_previous;

	struct List* NewNode;

	for(;forward_This != NULL || backward_This != NULL;)
	{
		if(forward_This->i_num > number )
		{
			NewNode = (struct List*)malloc(sizeof(struct List));

			NewNode->i_num = number;
			
			if(forward_This->previous == NULL)
			{
				NewNode->previous =NULL;
				forward_This->previous = NewNode;
				NewNode->next = forward_This;
				header = NewNode;
			}
			else
			{
				NewNode->next          = forward_This;
				forward_previous->next = NewNode;
				NewNode->previous      = forward_previous;
				forward_This->previous = NewNode;

			}
			return 1;
		}
		else if(backward_This->i_num < number && backward_This->i_num >=0)
		{
			NewNode = (struct List*)malloc(sizeof(struct List));
			
			NewNode->i_num =  number;
			
			if(backward_This->next == NULL)
			{
				backward_This->next = NewNode;
				NewNode ->next = NULL;
				NewNode->previous = backward_This;
				last = NewNode;
			}
			else
			{
				NewNode->previous           = backward_This;
				backward_previous->previous = NewNode;
				NewNode->next               = backward_previous;
				backward_This->next         = NewNode;
			}
			return 1;
		}
		else
		{
			forward_previous = forward_This;
			forward_This  = forward_This->next;

			backward_previous = backward_This;
			backward_This = backward_previous->previous;
		}
	}

	return 0;
}
