/*******************************************************************************

 Code Writer : The . L 2013.07.25 in XTU
 
 <Pointers On C>  Chapter one programe exercise 2

********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch = 0;
	int signal = 0;
	int ChangeLine = 1;
	int line = 0;
	while (1)
	{
		if( (ch =getchar()) != EOF)
		{
			signal = 1;
		}
		if(ChangeLine == 1)
		{
			printf("%d : ",line+1);
			ChangeLine = 0;
		}
		if(signal == 1)
		{
			printf("%c",ch);
			signal = 0;
		}
		if(ch == '\n')
		{
			line++;
			ChangeLine =1;
		}
	}
	return 0;
}