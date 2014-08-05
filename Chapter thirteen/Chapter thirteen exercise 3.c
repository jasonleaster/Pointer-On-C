/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter thirteen programe exercise 3

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
//!!!!
/*This code unable to run,it just my answer for program exercise 3*/
//!!!!
struct NODE 
{
	int 	i_num;
	double  f_num;
	struct NODE* next;
}*header;

void add_new_trans(NODE *list,NODE** current,Transaction * trans);
void delete_trans(NODE *list,NODE** current,Transaction * trans);
void search(NODE *list,NODE** current,Transaction * trans);
void edit(NODE *list,NODE** current,Transaction * trans);
void forward(NODE *list,NODE** current,Transaction * trans);
void backward(NODE *list,NODE** current,Transaction * trans)

int main ()
{
	int temp = 0;
	void (*function[])(NODE *list,NODE** current,Transaction * trans)
	{
		add_new_trans,
		delete_trans,
		search,
		edit,
		forward,
		backward
	};
	#define N_TRANSACTIONS (sizeof(function) / sizeof(function[0]))
	
	if(transaction->type <0 || transaction_type >= N_TRANSACTIONS)
	{
		printf("Illegal transaction type!\en");
	}
	else
	{
		function[transaction->type](list,&current,transaction);
	}
	
	return 0;
}

void forward(NODE *list,NODE** current,Transaction * trans)
{
	*current = (*current)->next;
}

void backward(NODE *list,NODE** current,Transaction * trans)
{
	*current = (*current)->pre;
}
