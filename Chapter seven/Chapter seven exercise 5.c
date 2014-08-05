/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter seven programe exercise 5

 O(∩_∩)O~  just call it printf_EOF 1.0
 
 But there are something not clearly in line 74 and I still not make %f come ture

********************************************************************************/

#include<stdio.h>
#include<stdarg.h>
int printf_EOF 	   (char const* String,...);
int putout_int_EOF (int number);
int main()
{
	int year = 17;
	char a[18] = {"I got it-- printf"};
	char c = 'l';

	printf_EOF("hello world !%s %d",a,100);
	getchar();
	return 0;
}

int printf_EOF (char const* String,...)
{
	int NumberOfCharater = 0;
    int Number 		     = 0;
	char** p 			 = NULL;
	va_list str;

	va_start(str,String);	//╮(╯▽╰)╭ str String represent different Strings pointer

	while( *(String)!= '\0' )
	{
		if(*(String) != '%')
		{
			putchar(*(String++));

		}
		else
		{
			switch(*(++String))
			{
				case 'c' :
                ++String;
				NumberOfCharater++;
				putchar(va_arg(str,int));
				break;

				case 'd' :
                ++String;
				NumberOfCharater++;
				Number = va_arg(str,int);
				putout_int_EOF (Number);

				break;
				
				case 's' :
                ++String;
				NumberOfCharater++;
				p = (char**)str;
				while( **p != '\0' )
				{
					putchar(**p);
					(*p)++;
				}
				p = NULL;
				((char*)str);
				//--------------到现在还是不明白，为什么强制类型转换回来之后 还是str要偏移四个而不是一个——》str++,这样不行---------------------
				str+=4;
				//-------------------------------------------------------------------------------------------------------------------------
				break;

				default :continue;
			}
		}
    }
	va_end(str);
	return NumberOfCharater;
}


int putout_int_EOF (int Number)
{
    int temp_number       = Number;
	int sub			      = 1;
    int number_digit      = 1;
    int temp_number_digit = 0;

    while(temp_number/=10)
    {
        number_digit++;																	//figure out how many digit the number is .....
    }

    while(number_digit)
    {
		for(temp_number_digit = number_digit-1;temp_number_digit>0;temp_number_digit--)
		{
			sub = sub*10;
		}
		putchar((Number/sub+'0'));
		Number%=sub;
        sub = 1;
        number_digit--;
    }

    return 0;
}
