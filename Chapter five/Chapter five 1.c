/*******************************************************************************

 Code Writer :The . L;
 
 <Pointers On C>  Chapter five programe exercise 1

********************************************************************************/
#include<stdio.h>
int main ()
{
	int ch = '\0';
	int  signal = 0;
	while((ch = getchar()) != EOF)
	{
		signal = 1;
		if(signal == 1)
		{
			if(ch<='Z'&&ch>='A')
			{
				ch += 32;
			}
			putchar(ch);
			signal=0;
		}
	}
	return 0;
}


