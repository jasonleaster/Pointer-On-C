/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter ten programe exercise 1

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/

#include<stdio.h>
int main ()
{
	struct PHONE_NUMBER
	{
		short area;
		short exchange;
		short station;
	};

	struct LONG_DISTANCE_BILL
	{
		short month;
		short day;
		short year;
		int   time;
		struct PHONE_NUMBER called;
		struct PHONE_NUMBER calling;
		struct PHONE_NUMBER billed;
	};

	return 0;
}
