/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 6


********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void written_amount(unsigned int amount );
void fun(int first,int second,int third,int temp);

char const * StringTheUnit[10] =
{
"",
"ONE",
"TWO",
"THREE",
"FOUR",
"FIVE",
"SIX",
"SEVEN",
"EIGHT",
"NINE",
};
char const * StringTeen[11] =
{
"",
"TEN"
"ELEVEN",
"TWELVE",
"THIRTEEN",
"FOURTEEN",
"FIFTEEN",
"SIXTEEN",
"SEVENTEEN",
"EIGHTEEN"
"NINTEEN"
};
char const* StringTy[9]=
{
"",
"TWENTY",
"THIRTY",
"FOURTY",
"FIFTY",
"SIXTY",
"SEVENTY",
"EGHITY",
"NINTY"
};
char const* StringBig[6] =
{
"",
"HUNDRED",
"THOUSAND",
"MILLION",
"BILLION",
"TRILLION"
};

int main()
{
	int num;
	printf("Boy...Please enter a number,I will change it into words!\n\n");

	while(!scanf("%d",&num))
	{
		printf("The data you entered is wrong!Please enter again!");
	}

	written_amount(num);

	return 0;
}

void written_amount(unsigned int amount )
{
	unsigned int temp_number       = amount;
    unsigned int number_digit      = 1;

	unsigned int number[18]		   = {0};
	unsigned int temp 			   = 0;
    while(temp_number/=10)
    {
        number_digit++;
	}

	temp_number = amount;

	for(temp = 0;temp<=17;temp++)
    {
		number[17-temp] = temp_number%10;
		temp_number/=10;
	}

	for(temp = 0 ;temp<18;temp+=3)
	{
		fun(number[temp],number[temp+1],number[temp+2],temp);
	}

}

void fun(int first,int second,int third,int temp)
{
	if(first !=0  && second ==0 && third == 0)
	{
		printf("%s %s ",StringTheUnit[first],StringBig[1]);
	}
	else if(first == 0 && second !=0 && third ==0)
	{
		printf("%s ",StringTy[second]);
	}
	else if(first == 0 && second ==0 && third !=0)
	{
		printf("%s ",StringTheUnit[third]);
	}
	else if(first != 0 && second !=0 && third ==0)
	{
		printf("%s %s %s ",StringTheUnit[first],StringBig[1],StringTy[second]);
	}
	else if(first != 0 && second ==0 && third !=0)
	{
		printf("%s %s %s ",StringTheUnit[first],StringBig[1],StringTheUnit[third]);
	}
	else if(first == 0 && second !=0 && third !=0)
	{
		if(second>1)
		{
			printf("%s %s ",StringTy[second-1],StringTheUnit[third]);
		}
		else
		{
			printf("%s ",StringTeen[third]);
		}
	}
	else if(first != 0 && second !=0 && third !=0)
	{
		if(second>1)
		{
			printf("%s %s %s %s ",StringTheUnit[first],StringBig[1],StringTy[second-1],StringTheUnit[third]);
		}
		else
		{
			printf("%s %s %s ",StringTheUnit[first],StringBig[1],StringTeen[third]);
		}
	}

	if(first == 0 && second==0 && third==0)
	{

	}
	else if(temp<=12&&(first != 0 ||second!=0 || third!=0))
	{
		printf("%s ",StringBig[6-(temp/3)]);
	}
}

