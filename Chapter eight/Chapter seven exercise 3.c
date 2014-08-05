/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 3


********************************************************************************/
#include<stdio.h>
#define DEMENTION_OF_MATRIX 10
int identity_matrix(int Array[][DEMENTION_OF_MATRIX]);
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

	if(identity_matrix(Array))
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

int identity_matrix(int Array[][DEMENTION_OF_MATRIX])
{
	int row = 0;
	int col = 0;
	//It is not very essential to check the boundary of the array. If it is not  fit this denmention 
	//the function will return 0 in the process of the function identity_matrix
	for (row = 0;row<DEMENTION_OF_MATRIX;row++)
	{
		for (col = 0;col<DEMENTION_OF_MATRIX;col++)
		{
			if(row == col && Array[row][col] != 1)
			{
				return 0;
			}

			if(Array[row][col] !=  0&& row!=col)
			{
				return 0;
			}
		}
	}

	return 1;
}


