/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter eight programe exercise 5


********************************************************************************/
#include<stdio.h>
#define TRUE  1
#define FALSE 0
void matrix_multiply(int* m1,int* m2, int*r,int x,int y,int z);
int main()
{
	int MatOne[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,1,1}
	};

	int MatTwo[4][5] =
	{
		{1,2,1,4,3},
		{2,8,3,3,3},
		{3,1,1,6,1},
		{4,3,1,2,3,}
	};

	int MatThree[3][5] =
	{
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};

	matrix_multiply(MatOne[0],MatTwo[0],MatThree[0],3,4,5);


	return 0;
}
void matrix_multiply(int* m1,int* m2, int*r,int x,int y,int z)
{
	int row = 0;
	int col = 0;
	int temp = 0;
	int position = 0;
	int b = 0;
	int c = 0;

	for(row = 0;row < x;row++)
	{
		for(temp = 0;temp<z;temp++)
		{
			for(position = 0;position<y;position++)
			{
				b = (*(m1+row*y+position));
				c = (*(m2+position*z+temp));
				(*(r+row*z+temp))	+= (b * c);
			}
		}
	}

	for (row = 0;row<x;row++)
	{
		for(col = 0;col<z;col++)
		{
			printf("%d\t",*(r+row*z+col));
		}
		printf("\n");
	}
}
