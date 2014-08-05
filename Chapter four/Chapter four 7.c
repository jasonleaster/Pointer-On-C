/*******************************************************************************

 Code Writer :The . L;
 
 <Pointers On C>  Chapter four programe exercise 7

********************************************************************************/


#include<stdio.h>
#define MaxLength 100
void deblank (char string[]);

int main ()
{
	char string[MaxLength] ={0};
	int  temp    	 = 0;
	printf("Please make sure the string length below 100 !\n\n");
	while((string[temp] = getchar())!= '\n'&&temp<MaxLength)
	{
		temp++;
	}
	string[temp] = '\0';

	deblank(string);
	printf("The string which was processed : %s",string);
	getchar();
	return 0;
}

void deblank (char string[])
{
	int temp 		= 0;
	int BlankNum 	= 0;
	int counter 	= 0;
	int location    = 0;
	int MoveTime    = 0;

	for(temp = 0;temp<MaxLength&&string[temp]!= '\0';temp++)
	{
		if(string[temp] == ' ')
		{
			for(counter = temp,BlankNum = 0;string[counter]==' ';counter++)
			{
				BlankNum++;
			}

			for(MoveTime = 0,location = temp;MoveTime<(MaxLength-(temp+BlankNum));MoveTime++)
			{
				string[location+MoveTime+1] = string[location+BlankNum+MoveTime];
				string[location+BlankNum+MoveTime] = '\0';
			}
	
		}
	}
}

