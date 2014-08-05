/*******************************************************************************

 Code Writer :The . L;
 
  <Pointers On C>  Chapter four programe exercise 2

********************************************************************************/


//One of  ways to solve the problem 

#include<stdio.h>
#define MAX_VALUE 100
int main()
{
	int number = 0;
	int temp   = 0;
	int counter  = 0;
	for(number = 1;number<=MAX_VALUE;number++)
	{
		for(temp = 1;temp<=number;temp++)
		{
			if(number%temp==0)
			{
				counter++;
			}

			if(counter>2)
			{
				break;
			}
			else if(counter==2&&temp==number)
			{
				printf("%d\t",number);
			}
		}
		counter = 0;
	}
	return 0;
}


//---------------------------------------------------------------------------
//Another way to solve the problem 

#include<stdio.h>
#include<stdio.h>
#define MAX_VALUE 100
int main()
{
	int number  = 0;
	int temp    = 0;
	int counter = 0;
	for(number = 1;number<=MAX_VALUE;number++)
	{
		for(temp = 2;temp<number;temp++)
		{
			if(number%temp==0)
			{
				break;
			}

			if(temp==number-1)
			{
				printf("%d\t  ",number);
				counter++;
				if(counter%5==0)
                {
                    printf("\n");
                }
			}
		}
	}
	printf("\n\nThere are %d prime numbers \n\n",counter);
	return 0;
}
