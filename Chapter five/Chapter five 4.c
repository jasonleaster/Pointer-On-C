/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter five programe exercise 2
 
 Make some change in conditon of data type. I change char array into int array.
 
 But why I made this is just for programe slove the preblem better.

********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int set_bit   (int bit_array [],unsigned bit_number);
int clear_bit (int bit_array[],unsigned bit_number);
int assign_bit(int bit_array[],unsigned bit_number,int value);
int test_bit  (int bit_array [],unsigned bit_number);

int main ()
{
	unsigned int number = 0;
	int temp  = 0;
	int bits  = 0;
	int ChangeOrNot = 0;
	int ChangePosition = 0;
	int *num  = NULL;
	printf("Please enter a unsigned number and I will reverse it in binary!...^_^\n\n");

	while(!scanf("%ud",&number))																	 //get a numebr
	{
		printf("Please enter again !The data you entered is wrong !\n\n");
	}

	bits = 8*sizeof(number);

	if( (num = (int*)malloc(bits*sizeof(int))) == NULL)										//apply to memory manager for some of RAM
	{
		printf("Memory application  failed!The programe can not run as uaual!\n\n");
		return 0;
	}

	for(temp = bits-1;temp>=0;temp--)
	{
		num[temp] = number%2;
		number /= 2;
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

	printf("Please enter a number that represent the position in the bit array.I will set the positon of the array into 1 \n\n");

	while(!scanf("%d",&ChangePosition))																	 //get a numebr
	{
		printf("Please enter again!The data you entered is wrong !\n\n");
	}

	set_bit (num,ChangePosition);

	printf("Please enter a number that represent the position in the bit array.I will set the positon of the array into 0 \n\n");

	while(!scanf("%d",&ChangePosition))																	 //get a numebr
	{
		printf("Please enter again!The data you entered is wrong !\n\n");
	}

	clear_bit (num,ChangePosition);

	printf("Please enter two number that the first one represent the position in the bit array.\
	The second one represent whether you really want to change it.\
	I will set the positon of the array into 0 \n\n");

	while(!scanf("%d %d",&ChangePosition,&ChangeOrNot))													 //get a numebr
	{
		printf("Please enter again!The data you entered is wrong !\n\n");
	}

	assign_bit(num,ChangePosition,ChangeOrNot);

	printf("Please enter a number that represent the position in the bit array.I will set the positon of the array into 1 \n\n");

	while(!scanf("%d",&ChangePosition))																	 //get a numebr
	{
		printf("Please enter again!The data you entered is wrong !\n\n");
	}

	test_bit (num,ChangePosition);

	free(num);
	num = NULL;

	return 0;
}

int set_bit   (int bit_array [],unsigned bit_number)
{
    int temp = 0;
	int ArraySize = 8*sizeof(bit_array);
	if(bit_number>ArraySize-1)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}

	bit_array[bit_number] = 1;

	printf("After the process, the bit array is :");

	for(temp = 0;temp<ArraySize;temp++)
	{
		printf("%d",bit_array[temp]);
		if(temp == ArraySize-1)
		{
			printf("\n");
		}
	}
    return 0;
}

int clear_bit (int bit_array[],unsigned bit_number)
{
    int temp = 0;
	int ArraySize = 8*sizeof(bit_array);
	if(bit_number>ArraySize-1)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}

	bit_array[bit_number] = 0;

	printf("After the process, the bit array is :");

	for(temp = 0;temp<ArraySize;temp++)
	{
		printf("%d",bit_array[temp]);
		if(temp == ArraySize-1)
		{
			printf("\n");
		}
	}
	return 0;
}

int assign_bit(int bit_array[],unsigned bit_number,int value)
{
    int temp = 0;
	int ArraySize = 8*sizeof(bit_array);
	if(bit_number>ArraySize-1)
	{
		printf("the second parameter is too big! The set_bit function can not accept it!\n\n");
		return 0;
	}
	if (value == 0)
	{
		bit_array[bit_number] = 0;
	}
	else
	{
		bit_array[bit_number] = 1;
	}

	printf("After the process, the bit array is :");

	for(temp = 0;temp<ArraySize;temp++)
	{
		printf("%d",bit_array[temp]);
		if(temp == ArraySize-1)
		{
			printf("\n");
		}
	}
	return 0;
}

int test_bit  (int bit_array [],unsigned bit_number)
{
    int temp = 0;
	int ArraySize = 8*sizeof(bit_array);
	if(bit_number>ArraySize-1)
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

	printf("After the process, the bit array is :");

	for(temp = 0;temp<ArraySize;temp++)
	{
		printf("%d",bit_array[temp]);
		if(temp == ArraySize-1)
		{
			printf("\n");
		}
	}
	return 0;
}
