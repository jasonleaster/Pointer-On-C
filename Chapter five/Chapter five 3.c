/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter five programe exercise 2

********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bits (unsigned int value);
int main ()
{
	unsigned int number = 0;
	printf("Please enter a unsigned number and I will reverse it in binary!...^_^\n\n");

	while(!scanf("%d",&number))																	 //get a numebr
	{
		printf("Please enter again !The data you entered is wrong !\n\n");
	}

	reverse_bits(number);																  		 // call function reverse_bits

	return 0;
}

unsigned int reverse_bits (unsigned int value)
{
	int temp = 0;
	int bits = 8*sizeof(value);																	//get the number that how many bit in the machine used to memory the value
	int *num = NULL;

	if( (num = (int *)malloc(bits*sizeof(int))) == NULL)										//apply to memory manager for some of RAM
	{
		printf("Memory application  failed!The programe can not run as uaual!\n\n");
		return 0;
	}

	for(temp = 0;temp<bits;temp++)														        //transform the number into binary
	{
		num[temp] = value%2;
		value /= 2;
	}

	printf("Before reversing ,the number in binary is :\n\n");

	for(temp = bits-1;temp>=0;temp--)
	{
		printf("%d",num[temp]);
		if(temp == 0)
		{
			printf("\n");
		}
	}

	printf("After reversing ,the number in binary is :\n\n");

	for(temp = 0;temp<bits;temp++)
	{
		printf("%d",num[temp]);
		if(temp == bits-1)
		{
			printf("\n");
		}
	}

	free(num);
	num = NULL;

	return 0;
}
