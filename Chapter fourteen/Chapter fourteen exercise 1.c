/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 1

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
//!!  I just give my answer to the exericse and this code coulde not run in IDE


#include<stdio.h>
void print_ledger (int parameter);
int print_ledger_default(int parameter);

int main ()
{
	return 0;
}

void print_ledger (int parameter)
{
	#ifdef  OPTION_LONG
    #define run 1
		print_ledger_long(parameter)
	#endif

	#ifdef OPTION_DETAILED
	#define run 1
		printf_ledger_detailed(parameter);
    #endif

	#ifndef run
		print_ledger_default(parameter);
	#endif
}

int print_ledger_default(parameter)
{
    return 1;
}
