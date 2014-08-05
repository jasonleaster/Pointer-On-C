/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 6

 E-mail:liuzijianlinux@gmail.com
********************************************************************************/


#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#define SIZEOFINFO 21
#define TRUE  1
#define FALSE 0
int array_offset (int arrayinfop[],...);
int main()
{
	int* information = NULL;
	information = (int*)malloc(SIZEOFINFO*sizeof(int));

	information[0] = 3;
	information[1] = 4;
    information[2] = 6;
	information[3] = 1;
	information[4] = 5;
    information[5] = -3;
	information[6] = 3;

	printf("The shifting is : %d",array_offset(information,4,2,-3) );
	getchar();
	return 0;
}

int array_offset (int arrayinfo[],...)
{
	int demention   = 0;
	int loc  		= 0;
	int temp 		= 0;

	va_list str;	//declaration the str . In fact ,it is a pointer to char data.If you want to exploration that, you could have a look at header file stdarg.h

	va_start(str,arrayinfo); //Initialize the str		
	
//----------------------------------------------------------------------------------------------------------------
//Check the data whether it could be use in the function

	/*  this code is wrong!Still now, I can not find a way to check about the description of arrayinfo[0] whether it is right or wrong...
	If you got a good way to realize this ,please touch me ,my QQ:695065778. E-mail:liuzijianlinux@gmail.com
	if( (arrayinfo-(int*)str)/sizeof(int*) != ((2*arrayinfo[0])+1) )
	{
		printf("The arrayinfo is wrong!\n");
		return 0;
	}*/

	if(arrayinfo[0]>10||arrayinfo[0]<0)
	{
		printf("The demention is wrong!\n");
		return FALSE;
	}

	for(temp = 0;temp<arrayinfo[0];temp++)
	{
		if(arrayinfo[2*temp+2]<arrayinfo[2*temp+1])
		{
			printf("The data of the arrayinfo does not follow the requirement of the arrayinfo");
			return FALSE;
		}
	}
//----------------------------------------------------------------------------------------------------------------

	for(demention = 0;demention<arrayinfo[0];demention++)// figure out the data that the question asked
	{
		loc = loc*(arrayinfo[2*demention+2]-arrayinfo[2*demention+1]+1) + va_arg(str,int) - arrayinfo[2*demention+1];
	}

	va_end(str);

	return loc;
}

