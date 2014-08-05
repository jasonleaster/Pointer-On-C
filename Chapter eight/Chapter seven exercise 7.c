/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 7

 just a little change in exercise 6

 If this code is somewhere could change into better condition,please touch me.

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

	printf("The shifting is : %d",array_offset(information,5,3,-1) );
	return 0;
}

int array_offset (int arrayinfo[],...)
{
	int demention   			= 0;
	int loc  					= 1;
	int temp 					= 0;
	int message[SIZEOFINFO]     = {0};
	int a[SIZEOFINFO]			= {0};
	int b[SIZEOFINFO]			= {0};

	va_list str;	//declaration the str . In fact ,it is a pointer to char data.If you want to exploration that, you could have a look at header file stdarg.h

	va_start(str,arrayinfo); //Initialize the str

	for(demention = 0;demention<arrayinfo[0];demention++)
	{
		message[demention] = va_arg(str,int);
	}

//----------------------------------------------------------------------------------------------------------------
//Check the data whether it could be use in the function

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

	for(temp = 0;temp<arrayinfo[0];temp++)
	{
		if((message[temp]<arrayinfo[2*temp+1])||(message[temp]>arrayinfo[2*temp+2]))
		{
			printf("The data of the second parameter does not follow the requirement of the arrayinfo");
			return FALSE;
		}
	}
//----------------------------------------------------------------------------------------------------------------

	for(demention = 0;demention<arrayinfo[0];demention++)
	{
		a[demention] = (message[demention] - arrayinfo[2*demention+1]);
		b[demention] = (arrayinfo[2*demention+2]-arrayinfo[2*demention+1]+1);

	}


	for(demention = arrayinfo[0],loc = a[demention];demention >0;demention--)// figure out the data that the question asked
	{
		loc *= b[demention-1];
		loc += a[demention-1];
	}

	va_end(str);

	return loc;
}
