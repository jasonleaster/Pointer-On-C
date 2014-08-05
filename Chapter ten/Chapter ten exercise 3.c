/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter ten programe exercise 3

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
int main ()
{
	union machine_inst
	{
		unsigned  addr;
		
		struct  
		{
			unsigned opcode:16;
		}misc;
		
		struct   
		{
			unsigned opcode:8;
			unsigned offset:8;
		}branch;
		
		struct 
		{
			unsigned opcode	 :7;
			unsigned src_reg :3;
			unsigned dst_reg :3;
			unsigned dst_mode:3;
		}sgl_op;
		
		struct 
		{
			unsigned opcode	 :7;
			unsigned src_reg :3;
			unsigned dst_reg :3;
			unsigned dst_mode:3;
		}reg_src;
		
		struct 
		{
			unsigned opcode:4;
			unsigned src_mode:3;
			unsigned src_reg:3;
			unsigned dst_mode:3;
			unsigned dst_reg:3;
		}dbl_op;
	} x ;
	return 0;
}
