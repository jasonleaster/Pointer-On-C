/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 4


********************************************************************************/
#include<stdio.h>
#define DEMENTION_OF_MATRIX 10
#define TRUE  1
#define FALSE 0
int identity_matrix(int* Array,int demention);
int main()
{
	int Array[DEMENTION_OF_MATRIX][DEMENTION_OF_MATRIX] =
	{
		{1,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,0,0},
		{0,0,1,0,0,0,0,0,0,0},
		{0,0,0,1,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,1,0,0,0,0},
		{0,0,0,0,0,0,1,0,0,0},
		{0,0,0,0,0,0,0,1,0,0},
		{0,0,0,0,0,0,0,0,1,0},
		{0,0,0,0,0,0,0,0,0,1},

	};

	if(identity_matrix(Array[0],10))
	{
		printf("It is a identity matrix!\n\n");
	}
	else
	{
		printf("It is not a identity matrix!\n\n");
	}
	getchar();
	return 0;
}

int identity_matrix(int* temp,int demention)
{
	int row = 0;
	int col = 0;

	for (row = 0;row<demention;row++)
	{
        while(col<demention)
        {
           if(  ((*(temp+col+row*demention))!= 0 ) && row !=col)
           {
                return FALSE;
           }
           else if(  ((*(temp+col+row*demention))!= 1 ) && row ==col)
           {
                return FALSE;
           }
           col++;
        }
        col = 0;
	}

	return TRUE;
}


