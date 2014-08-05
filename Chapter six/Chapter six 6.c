/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter six programe exercise 6


********************************************************************************/

#include<stdio.h>
#define SignalArraySize 10000
void FindPrimerNumber(void);
int main ()
{
	FindPrimerNumber();
	return 0;
}

void FindPrimerNumber(void)
{
	int signal[SignalArraySize];
	int tendency[SignalArraySize/100] = {0};
	int number = 0;
	int num	   = 0;														// I am sorry about I can not find another identifier

	for(number = 0;number<SignalArraySize;number++)						//set all the element in the array is right = 1
	{
		signal[number] = 1;
	}

	for(number = 1;number<=SignalArraySize;number++)					// Eratosthenes algorithm
	{
		if(signal[number] != 0)
		{
			for(num = number+2;num<=SignalArraySize;num++)
			{
				if(num%(number+1) == 0)
				{
					signal[num-1] = 0;
				}
			}
		}
	}

	for(number = 1;number<SignalArraySize;number++)						//print the primer number
	{
		if(signal[number]!= 0)
		{
			(tendency[number/100])++;
		}
	}

	for(number = 0;number<(SignalArraySize/100);number++)						//print the primer number
	{
		printf("%d\t",tendency[number]);
	}
}
