// sdsdsdsd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#define ChessboardSize	8
int main ()
{
	int row	= 0;
	int col = 0;
	int x	= 0;
	int y 	= 0;
	int var = 0;
	int Queen[ChessboardSize][ChessboardSize] = {{0}};


	for(row = 0;row<ChessboardSize;row++)
	{
		for(col = 0;col<ChessboardSize;col++)
		{
			Queen[row][col] = 1;
		}
	}

	for(var = 0;var<ChessboardSize;var++)
	{
	for(row = var,col= 0;row<ChessboardSize;)
	{
		if(Queen[row][col]==1)
		{
		    if(row>0)
            {
				//------------------------------------右上角---------------------------
                for(x = row-1,y=col+1;y<ChessboardSize && x>0;y++,x--)
                {
                    Queen[x][y] = 0;
                }

				if(col>0)//左下角
				{
					for(x = row+1,y=col-1;y>0 && x<ChessboardSize;y--,x++)
					{
						Queen[x][y] = 0;
					}
				}
                //--------------------------------------水平-------------------------------------
                for(x = row,y=col+1;y<ChessboardSize;y++)
                {
                    Queen[x][y] = 0;
                }

				if(col!=0)
				{
					for(x = row,y=0;y<col;y++)
					{
						Queen[x][y] = 0;
					}
				}

                //-------------------------------------右下角-----------------------
                for(x = row +1,y = col+1;y<ChessboardSize&&x<ChessboardSize;x++,y++)			//kill the Queens on the diagonal
                {
                    Queen[x][y] = 0;
                }

				if(col>0)//左上角
				{
					 for(x = row -1,y = col-1;x>0;x--,y--)			//kill the Queens on the diagonal
					{
						Queen[x][y] = 0;
					}
				}

                //--------------------------------------竖直--------------------------------------
                for(x = row +1,y = col;x<ChessboardSize;x++)			//kill the Queens on the diagonal
                {
                    Queen[x][y] = 0;
                }

				if(col>0)
				{
					for(x = 0,y = col;x<row;x++)			//kill the Queens on the diagonal
					{
						Queen[x][y] = 0;
					}
				}
				
				row+=2;
				col++;
            }
			else
			{
				for(x = row,y=col+1;y<ChessboardSize;y++)
				{
				   Queen[x][y] = 0;
				}

				for(x = row +1,y = col;x<ChessboardSize;x++)			//kill the Queens on the diagonal
				{
				   Queen[x][y] = 0;
				}
				row++;
				col+=2;
			}
		}
	}
	for(row = 0;row<ChessboardSize;row++)
	{
		for(col = 0;col<ChessboardSize;col++)
		{
			printf("%d ",Queen[row][col]);
			if(col == ChessboardSize-1)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("\n");
	}

	getchar();

	return 0;
}
