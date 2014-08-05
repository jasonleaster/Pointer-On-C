/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 7

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<string.h>
char* my_strrchr(char const* str,int ch);
int main()
{
	char Array[20] = {"Miss Dong"};

	printf("%s",my_strrchr(Array,'s'));

	return 0;
}

char* my_strrchr(char const* str,int ch)
{
	int temp = 0;
	for(temp = 0;str[temp] != '\0';temp++)
	{
		if( str[temp] == ch)
		{
			for(++temp;str[temp]!= '\0';temp++)
			{
				if(str[temp] == ch)
				{
					return (char*)str+temp;
				}
			}

			return (char*)str+temp;
		}
	}

	return NULL;
}
