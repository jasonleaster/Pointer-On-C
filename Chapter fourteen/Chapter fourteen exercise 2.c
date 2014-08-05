/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 2

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
//!!  I just give my answer to the exericse and this code coulde not run in IDE

#include<stdio.h>
#include"cpu_type.h"
int cpu_type(void);
int main()
{
	return 0;
}
int cpu_type(void)
{
	#ifdef  VAX
		#define CPU 1
	return CPU_VAX;
	#endif

	#ifdef M68000
		#define CPU 1
	return CPU_68000;
	#endif

	#ifdef M68020
		#define CPU 1
	return CPU_68020;
	#endif

	#ifdef I80386
		#define CPU 1
	return CPU_80386;
	#endif

	#ifdef X6809
		#define CPU 1
	return CPU_6809;
	#endif

	#ifdef X6502
		#define CPU 1
	return CPU_6502;
	#endif

	#ifdef U3B2
		#define CPU 1
	return CPU_U2B2;
	#endif

	#ifndef CPU
	return CPU_UNKNOWN;
	#endif

}
