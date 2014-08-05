/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter thirteen programe exercise 2

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct NODE 
{
	int 	i_num;
	double  f_num;
	struct NODE* next;
}*header;

int add(int number);
int sub(int number);
int CreatSingleList(int Size);
int DestoryList(struct NODE* header);
int function(struct NODE* header,int (*fun)(int number));

int main ()
{
	int (*CallBackFunction[2])(int number) = 
	{
		add,
		sub
	};
	
	CreatSingleList(10);
	
	function(header,CallBackFunction[0]);
	
	DestoryList(header);
	
	return 0;
}

int add(int number)
{
	number++;
	
	return number;
}

int sub(int number)
{	
	number--;
	return number;
}

int function(struct NODE* header,int (*fun)(int number))
{
	struct NODE* test = header;
	
	for(;test != NULL;)
	{
		test->i_num = fun(test->i_num);
		test = test->next;
	}
	
	return 1;
}

int CreatSingleList(int Size)
{
	int temp = 0;
	
	struct NODE* This;
	struct NODE* previous;
	
	for(temp = 0; temp< Size;temp++)
	{
		This = (struct NODE*)malloc(sizeof(struct NODE));

		if(This == NULL)
		{
			return 0;
		}
		
		if(temp == 0)
		{
			header = This;
		}
		else
		{
			previous->next = This;
		}

		if(temp == Size-1)
		{
			This->next = NULL;
		}

		previous = This;
		
		This->i_num = temp*10;
		
		This = This->next;
	}
	
	return 1;
}

int DestoryList(struct NODE* header)
{
	struct NODE* This = header;
	struct NODE* temp;
	
	for(;This != NULL;)
	{
		printf("%d\t",This->i_num);//just for testing
		temp = This->next;
		free(This);
		This = temp;
	}
	
	return 1;
}