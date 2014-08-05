/*************************************************************************************************************
   
   《Pointers on C》 Chapter one program exercise 1.8.4
   
	Code Writer : The . L 2013.07.25 in XTU

**************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//The length of every entered character string must below 1000

int main()
{
	char ch 		= 0;			//use for memory the character in input stream 
	int  max    	= 0;			//use for record the max number of the numbers that count pointer point to
	int  n   		= 0;			//memory how many rows users would enter
	int  row	    = 0;	  		// use for 'for circle' variabel
	int  col		= 0;	    	// use for 'for circle' variabel
	int  temp 		= 0;
	int*  max_row;
	int*  count;			    	// point to a peice of RAM which memory how many words in each string
	int** string;					// point to a peice of RAM which memory how many strings there are
	
	printf("Please enter the number of the rows you will enter\n");
	
	fflush(stdin);			   		// clean up the input stream
	while(!scanf("%d",&n))	  		// enter the value of variabel n and check the entered data is right or wrong
	{
		printf("The entered data is wrong ! Please enter again!");
	}
	
	max_row = (int*)malloc(n*sizeof(int));		  //apply to the RAM manager for a piece of RAM used for max_row
	
	count = (int*)malloc(n*sizeof(int));          //apply to the RAM manager for a piece of RAM used for count
	
	for (row=0;row<n;row++)						  //initialize the pointers
	{
		count[row]=0;
	}
	
	
	//----------------------------------------------------------------------------------------------------------
	string = (int**)malloc(n*sizeof(int*));		  //apply to the RAM manager for a piece of RAM used for string
	
	for (row=0;row<n;row++)
	{
		*(string+row) = (int*) malloc(SIZE *sizeof(int));
	}
	//----------------------------------------------------------------------------------------------------------
	
	
	for(row=0;row<n;row++)							 	//initialize the secondary pointers
	{
		for(col=0;col<SIZE;col++)
		{
			string[row][col] = 0;
		}
	}

	fflush(stdin);										//clean up the input stream
	//********************************************Input****************************************************** 
	for(row=0;row<n;row++)
	{
		for(col=0;col<=SIZE&&string[row][col-1]!='\n';++col)   
		// "col-1" is used in a very special way to pick up what read in "just now"
		{
			//scanf("%c",&string[row][col]);
			string[row][col] =getchar();		        //read strings in the input stream
			(count[row])++;								//record how many words in the string
		}
	}
	//******************************************************************************************************** 
	
	//********************************************Output******************************************************
	for(row=0;row<n;row++)								//find out the longest how long it is
	{
		max = count[row] > max ? count[row] : max;
	}
	
	for(row = 0,temp =0;row<n;row++)					//find out the longest string's row number
	{
		if(count[row]==max)
		{
			max_row[temp]=row;
			temp++;
		}
	}
	
	system("cls");
	
	printf("Now,The longest string is :\n");
	
	for(row=0,temp=0;row<n;row++)						//printf the longest string
	{
		if(max_row[temp]==row)
		{
			for(col=0;col<SIZE&&string[row][col]!='\n';col++)
			{
				printf("%c",string[row][col]);
			}
			printf("\n");
			temp++;
		}
		
	}
	
	printf("\n There is %d character in the string!.......^_^",col);
	//********************************************************************************************************  	
		
	for (row=0;row<n;row++)
	{
		free(string[row]);
		string[row]=NULL;
	}
	string=NULL;

	system("pause");
	
	return 0;
}