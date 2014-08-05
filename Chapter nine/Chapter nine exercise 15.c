/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 12

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define SIZEOFSRC 50
void dollars (char *dest,char const *src);
int main ()
{
	int number = 0;
	char src[SIZEOFSRC] = {0};                                  //original numbers
	number = ((SIZEOFSRC+1)/3) + ((SIZEOFSRC+1)%3!= 0);			//figure out how many non-number characters
	number = number +SIZEOFSRC;									//how many characters in the output
	char* dest = (char*)malloc(number*sizeof(src[0]));			

	printf("Please enter a number string:\n");
	gets(src);

	dollars(dest,src);

	free(dest);
	dest = NULL;
	return 0;
}

void dollars (char *dest,char const *src)//I know that it is not the best way to solve this problem,but this is what first emerge in my mind
{
	int counter = 0;
	int temp    = 0;
	int num     = 0;
	int label   = 0;
	int time    = 0;

	for(counter = 0; src[counter] != '\0';counter++ )
	{

	}

	label = ((counter+1)/3)+((counter+1)%3!= 0);

	num   = label + counter;
	if(counter>2)													//these are two algorithm divided by whether these number characters more than two 
	{
		for(temp = num;temp>0;temp--)
		{
			if(temp == num -3)
			{
				dest[3] = '.';
				continue;
			}

			if((time == 3) && (temp<num-3) && temp>1 )
			{
				dest[num-temp] = ',';
				time = 0;
				continue;
			}

			dest[num-temp] = src[counter];
			if(temp<num-3)
			{
				time++;
			}
			counter--;
		}
		dest[num] = '$';

		for(temp = num;dest[temp] != '\0';temp--)
		{
			putchar(dest[temp]);
		}
	}
	else
	{
		dest[5] = '$';
		dest[4] = '0';
		dest[3] = '.';
		dest[2] = src[0];
		dest[1] = src[1];
		dest[0] = '\0';
		for(temp = 5;temp>=0;temp--)
		{
			putchar(dest[temp]);
		}
	}
}
