/*******************************************************************************

 Code Writer :The . L;
 
  <Pointers On C>  Chapter four programe exercise 4

********************************************************************************/
#include<stdio.h>
int CopyString(char StringOne[],char StringTwo[],int n);

int main ()
{
	char stringA[20] = {"liuzijian"};
	char stringB[20] = {"wakaka"};

	if(!CopyString(stringA,stringB,3))							// make sure the Third parameter smaller than the number of characters in StringTwo
	{
		printf("The third parameter number  is wrong!\n\n");
	}

	printf("stringA: %s \nstringB :%s\n",stringA,stringB);
	return 0;
}

int CopyString(char StringOne[],char StringTwo[],int n)
{
	int temp = 0;
	int StringOneSize = 0;
	int StringTwoSize = 0;

	for (temp = 0,StringOneSize =1;StringOne[temp]!='\0';temp++)  //find out how many characters in the string
	{
		StringOneSize++;
	}

	for (temp = 0,StringTwoSize =1;StringTwo[temp]!='\0';temp++)  //find out how many characters in the string
	{
		StringTwoSize++;
	}

	if(n>StringTwoSize)											 //if the third parameterer is wrong , end the function
	{
		return 0;
	}

	for(temp = 0;temp<StringOneSize;temp++)						 //clean up the StringOne enable the StringTwo will cover the StringOne
	{
		StringOne[temp] = NULL;
	}

	if(StringTwoSize <= n)										// if the n bigger than the StringTwoSize copy the real all character in StringTwo to
	{															// StringOne and  if there are some empty room in StringOne ,copy NULL to StringOne's these room
		for(temp = 0;temp<n;temp++)
		{
			if(temp<StringTwoSize)
			{
				StringOne[temp] = StringTwo[temp];
			}
			else
			{
				StringOne[temp] = NULL;
			}

		}
	}
	else
	{
		for(temp = 0;temp<n;temp++)								//if StringTwoSize equal to n ,copy all the character in StringTwo to StringOne
		{
			StringOne[temp] = StringTwo[temp];
		}
	}

	return 1;
}
