/*******************************************************************************

 Code Writer :The . L;

  <Pointers On C>  Chapter four programe exercise 6
  
********************************************************************************/

#include<stdio.h>
#define MaxLength 100
int substr(char dst[],char src[],int start,int len);

int main ()
{
	char StringOne[MaxLength] = {0};
	char StringTwo[MaxLength] = {0};
	int  StringOneLength	  =  0;
	int  StringTwoLength	  =  0;
	int  InsertPosition		  =  0;
	int  len				  =  0;								//The number of characters that will insert into StringOne

	printf("Please enter a string into StringOne.^_^\n\n");
	while((StringOne[StringOneLength] = getchar() ) != '\n')
	{
		StringOneLength++;
	}
	StringOne[StringOneLength] = '\0';

	fflush(stdin);

	printf("Please enter a string into StringTwo.^_^\n\n");
	while((StringTwo[StringTwoLength] = getchar() ) != '\n')
	{
		StringTwoLength++;
	}
	StringTwo[StringTwoLength] = '\0';

	fflush(stdin);

	printf("How many characters do you want to insert into StringOne\n\n");

	while(!scanf("%d",&len))
	{
		printf("The data you entered is wrong!Please enter again!\n\n");
	}

	printf("Where do you want to start insert in the StringTwo\n\n");

	while(!scanf("%d",&InsertPosition))
	{
		printf("The data you entered is wrong!Please enter again!\n\n");
	}

	substr(StringOne,StringTwo,InsertPosition,len);

	printf("The string which was processed :%s",StringOne);
	getchar();
	return 0;
}

int substr(char dst[],char src[],int start,int len)
{
	int temp = 0;
//------------------------------If conditon allow us to set "StringOneLength""StringTwoLength" as a global variabel , the statement is unnecessary-----------------------------------------------------
	int  StringOneLength	  =  0;
	int  StringTwoLength	  =  0;
	for(StringOneLength = 0;dst[StringOneLength]!='\0';StringOneLength++)
	{
	}
    StringOneLength++;
	for(StringTwoLength = 0;src[StringTwoLength]!='\0';StringTwoLength++)
	{
	}
	StringTwoLength++;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	if((start>StringTwoLength)||len<0||start<0)
	{
		return 0;
	}

	if((StringOneLength+len)>MaxLength)
	{
		printf("The size of first parameter is too small,Please change the number of MaxLength,\
and then the program might meet you need");
	}
	else
	{
		for(temp = start;temp<start+len&&src[temp]!='\0';temp++)
		{
			dst[StringOneLength+temp-start-1] = src[temp];
		}
		dst[StringOneLength+temp-start] = '\0';
	}

	return 0;

}
