#include<stdio.h>
#define ChessboardSize	8
int main ()
{
	int row	= 0;
	int col = 0;
	int x	= 0;
	int y 	= 0;
	int Queen[ChessboardSize][ChessboardSize] = {{0}};


	for(row = 0;row<ChessboardSize;row++)
	{
		for(col = 0;col<ChessboardSize;col++)
		{
			Queen[row][col] = 1;
		}
	}

	for(row = 0,col= 0;row<ChessboardSize;)
	{
		if(Queen[row][col]==1)
		{
			for(x = row+1,y = col;x<ChessboardSize;x++)					//kill the Queens on the same rows
			{
				Queen[x][y] = 0;
			}
			
			for(x = 0,y = col;x<row;x++)					//kill the Queens on the same rows
			{
				if(x!=0&&y!=0)
				{
					Queen[x][y] = 0;
				}
			}
			

			for(x = row,y = 0;y<col;y++)					//kill the Queens on the same columns
			{
				Queen[x][y] = 0;
			}

			for(x = row,y = 0;y<ChessboardSize;y++)					//kill the Queens on the same columns
			{
				if(x!=0;y!=0)
				{
					Queen[x][y] = 0;
				}
			}

			for(x = row +1,y = col+1;x<ChessboardSize;x++,y++)			//kill the Queens on the diagonal
			{
				Queen[x][y] = 0;
			}
			row+=2;
			col++;
		}
		else
		{
			row+=2;
			col++;
		}
	}

	for(row = 0;row<ChessboardSize;row++)
	{
		for(col = 0;col<ChessboardSize;col++)
		{
			printf("%d",Queen[row][col]);
			if(col == ChessboardSize-1)
			{
				printf("\n");
			}
		}
	}

	return 0;
}
