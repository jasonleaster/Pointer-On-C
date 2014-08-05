/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 6

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h.>
#include<stdlib.h>
int numberic_palindrome(int value);
int main ()
{
    if(numberic_palindrome(14741) == 1)
    {
        printf("It is a palindrome number\n");
    }
    else
    {
        printf("It is not a palindrome number\n");
    }

	return 0;
}
int numberic_palindrome(int value)
{
	int num  = 0;
	int temp = 0;
	int counter = 0;
	int* array = NULL;
	for(num = 1,temp = value;temp/=10;num++)
	{

	}

	array = (int*)malloc(num*sizeof(int));

	for(counter = 0,temp = value;counter<num;counter++)
	{
		array[counter] = temp%10;
		temp/=10;
	}

	for(temp = 0;temp<num/2;temp++)
	{
		if(array[temp] != array[num-temp-1])
		{
			return 0;
		}
	}

	free(array);
	return 1;
}
