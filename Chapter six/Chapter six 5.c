/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter six programe exercise 5


********************************************************************************/

#include<stdio.h>
#define SignalArraySize 1000
void FindPrimerNumber(void);
int set_bit   (int bit_array [],unsigned bit_number);
int clear_bit (int bit_array [],unsigned bit_number);
int test_bit  (int bit_array [],unsigned bit_number);
int main ()
{
	FindPrimerNumber();
	return 0;
}

void FindPrimerNumber(void)
{
	int signal[SignalArraySize];
	unsigned int number = 0;
	unsigned int num	= 0;														// I am sorry about I can not find another identifier

	for(number = 0;number<SignalArraySize;number++)						//set all the element in the array is right = 1
	{
		set_bit(signal,number);
	}

	for(number = 1;number<=SignalArraySize;number++)					// Eratosthenes algorithm
	{
		if(test_bit(signal,number))
		{
			for(num = number+2;num<=SignalArraySize;num++)
			{
				if(num%(number+1) == 0)
				{
					clear_bit(signal,num-1);
				}
			}
		}
	}

	for(number = 0;number<SignalArraySize;number++)						//print the primer number
	{
		if(signal[number]!= 0)
		{
			printf("%d\t",number+1);
		}
	}

}
//----------------cut out at chapter five programe four ------I made some a lillte changes---------------------------------
int set_bit   (int bit_array [],unsigned bit_number)
{
	int ArraySize = SignalArraySize;
	if(bit_number>ArraySize-1)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}

	bit_array[bit_number] = 1;

    return 0;
}

int clear_bit (int bit_array[],unsigned bit_number)
{
	int ArraySize = SignalArraySize;
	if(bit_number>ArraySize-1)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}

	bit_array[bit_number] = 0;
	return 0;
}

int test_bit  (int bit_array [],unsigned bit_number)
{
	int ArraySize = SignalArraySize;
	if(bit_number>ArraySize)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}
	if(bit_array[bit_number] != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

	return 0;
}

