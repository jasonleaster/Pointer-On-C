/*******************************************************************************

 Code Writer :The . L;
 
  <Pointers On C>  Chapter four programe exercise 3

********************************************************************************/

#include<stdio.h>
int main()
{
	int temp = 0;
	int LengthOfAside[3] ={0};
	printf("Now,boy...You may enter three numbers\
that represent of the length of each aside of traingle\n\n");

	for( temp =0;temp<3;temp++,fflush(stdin))
	{
		if(!scanf("%d",&LengthOfAside[temp]))
		{
			printf("The data you entered is wrong ,Please enter again ");
			temp--;
		}
	}

	if(LengthOfAside[0]+LengthOfAside[1]<LengthOfAside[2]||\ 	//The requirement of a triangle。。。。。
	   LengthOfAside[0]+LengthOfAside[2]<LengthOfAside[1]||\
	   LengthOfAside[1]+LengthOfAside[2]<LengthOfAside[0])
	   {
		printf("It is not a triangle!");
	   }
	else if(LengthOfAside[0]==LengthOfAside[1]&&\ 				//The requirement of a equilateral triangle。。。。。
			LengthOfAside[0]==LengthOfAside[2]&&\
			LengthOfAside[1]==LengthOfAside[2])
			{
				printf("It is a equilateral traingle!");
			}
	else if( (LengthOfAside[0]==LengthOfAside[1]&&\  			//The requirement of a isosceles triangle。。。。。
			  LengthOfAside[0]==LengthOfAside[2])||\
			 (LengthOfAside[1]==LengthOfAside[2]&&\
			  LengthOfAside[1]==LengthOfAside[0])||
			 (LengthOfAside[2]==LengthOfAside[1]&&\
			  LengthOfAside[2]==LengthOfAside[0]))
			{
				printf("It is a isosceles triangle!");
			}
	else
	{
		printf("It is a simple triangle!");
	}
	return 0;
}

