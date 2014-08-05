/*******************************************************************************

 Code Writer :The . L;
 
 <Pointers On C>  Chapter five programe exercise 2

********************************************************************************/

#include<stdio.h>
int main ()
{
	int ch = '\0';
	int  signal = 0;
	printf("Please enter a string , I will encrypt it for you!\n\n");
	while((ch = getchar()) != EOF)
	{
		signal = 1;
		if(signal == 1)
		{
			if(ch<='Z'&&ch>='A'||ch<='z'&&ch>='a')
			{
				ch += 13;
			}
			putchar(ch);
			signal=0;
		}
	}
	return 0;
}
