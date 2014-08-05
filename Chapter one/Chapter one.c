/*****************************************************************************************

 Code Writer :The . L;
 
 <Pointers On C>  Chapter one programe which I made some improvement on author's condition

*****************************************************************************************/


/*
	eg:
	-----------------------------------------------------------
	intput:
	4 9 12 20 q
	-----------------------------------------------------------
	intput:
	abcdefghijklmnopqrstuvwxyz
	output:
	efghijmnopqrstu
	-----------------------------------------------------------
	input:
	Hello there,how are you?
	output:
	o ther how are
	-----------------------------------------------------------
	input:
	See you!
	Output:
	you!
	-----------------------------------------------------------
	
	***********************************************************
	
	Code Wirter: The . L
	
	Date : 2013/07/23 night in XTU
	
	***********************************************************
*/


#include "StdAfx.h"
#include<stdio.h>
#include<stdlib.h>
#define N 10
#define M 100
void ranking(int num[],int notni);
void ioput  (int num[],int notni);
int main()
{
	int  OrderNumber[N];
	int  signal=1;
	int  notni=0;// number of the numbers inputed
	int  ret=0;// return value of scanf
	
	printf("\
	Now, boy....Please enter some numbers and\n\n \
	make sure that all you typed in are positive number,\n\n \
	Otherwise I will warining you and give you others \n\n \
	chance to input!The number of the number stream\n\n \
	must be even number and smaller than 10 !Remenber\n\n \
	that in your mind when you type in. If you want \n\n \
	to end your type,you could enter a 'q' before you\n\n \
	are sure the number of the number stream is even number!^_^\n\n");
	
	while(signal)
	{
		if(notni == N)
		{
			break;
		}
		ret = scanf("%d",&OrderNumber[notni]);
		if( (OrderNumber[notni]<0&&OrderNumber[notni]!=-858993460) ||( ret!=0 && OrderNumber[notni]<0))//when type data is minus , entered again!
		{
			printf("The date you typed in is wrong!Boy...Please enter again follow in description!");
			continue;
		}
		if(OrderNumber[notni]==-858993460 && ret==0)
		//when typed in character 'q',leave the loop,-858993460 is a value when you enter 'q' with scanf("%d",&IntStyleNumber);
		{
			if(notni%2!=0)
			{
				notni = -1;
				printf("The date you typed in is wrong!Boy...Please enter again follow in description!\n");
				printf("enter all the data again!\n");
				fflush(stdin);
			}
			else
			{
				signal=0;
			}
		}
		notni++;//number counter,show you how many numbers there....
	}
	signal = 1;
	
	ranking(OrderNumber,notni-1);
	
	system("cls");
	
	while(signal)
	{
		ioput(OrderNumber,notni-1);
		printf("\n If you want to leave this program,you may enter a 'q'.\nIf you want to try again,enter a 'y'.\n\n\n\n\n\n");
		char decision=0;
		fflush(stdin);
		decision = getchar();
		while(decision!='y'&&decision!='q')
		{
			printf("The date you typed in is wrong!Boy...Please enter again !\n");
			fflush(stdin);
			decision = getchar();
		}
		if(decision == 'q')
		{
			signal = 0;
		}
		else if(decision == 'y')
		{
			system("cls");
			continue;
		}
	}

	system("pause");
	
	return 0;
}

void ranking (int num[],int notni)//bubble sort
{
	int i=0,j=0;
	int temp=0;
	for(i=0;i<notni-1;i++)
	{
		for(j=i+1;j<notni;j++)
		{
			if(num[i]>num[j])
			{
				temp    = num[i];
				num[i]  = num[j];
				num[j]  = temp;	
			}
		}
	}
}

void ioput(int num[],int notni)
{
	char string[M]={0};
	int i      = 0;
	int j      = 0;
	int ret    = 0;// return value of scanf
	int signal = 1;
	int countall  = 0;
	int OutPutLength=0;//memory the output string length one time.	
	
	printf("\
	Boy...Now,Please enter a string and make sure \n\n \
	the string length not longer than 100 character! Otherwise\n\n\
	,you may have to type in again! If you want to end your type,you \n\n\
	could enter a '0' before you are sure the string is over  ^_^\n\n");
	fflush(stdin);
	gets(string);
	for(i=0;i<notni;i=i+2)
	{
		for(j=num[i],OutPutLength = num[i+1]-num[i]+1;j<num[i]+OutPutLength;j++)
		{
			if(string[j]=='0'||string[i]==NULL)
			{
				break;
			}
			printf("%c",string[j]);
			if(string[j+1]=='0')
			{
				break;
			}
		}
		if(string[j]=='0')
		{
				break;
		}
	}	
}