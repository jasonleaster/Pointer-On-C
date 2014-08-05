/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 7

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h.>
#define BUFFERSIZE 200
int AverageAge(void);
int main ()
{
	AverageAge();
	return 0;
}
int AverageAge(void)
{
	int  FamilyAge[3][10];
	char buffer[BUFFERSIZE];
	int  sum  = 0;
	int  time = 0;
	int  family = 0;
	int  member = 0;

	for(family = 0;family<3;family++)
	{
		for(member = 0;member<10;member++)
		{
			FamilyAge[family][member] = 0;
		}
	}

	for(family = 0;family<3;family++)
	{
		fgets(buffer,BUFFERSIZE-1,stdin);
		sscanf(buffer,"%d %d %d %d %d %d %d %d %d %d ",
		&FamilyAge[family][0],
		&FamilyAge[family][1],
		&FamilyAge[family][2],
		&FamilyAge[family][3],
		&FamilyAge[family][4],
		&FamilyAge[family][5],
		&FamilyAge[family][6],
		&FamilyAge[family][7],
		&FamilyAge[family][8],
		&FamilyAge[family][9]);
	}

	for(family = 0;family<3;family++)
	{
		for(member = 0,sum = 0,time = 0;member<10;member++)
		{
			if(FamilyAge[family][member]<0)
			{
				printf("The data of age is wrong!Age can not be a negataive number");
				return 0;
			}
		}
	}

	for(family = 0;family<3;family++)
	{
		for(member = 0,sum = 0,time = 0;member<10;member++)
		{
			if(FamilyAge[family][member] > 0)
			{
				sum +=FamilyAge[family][member];
				time++;
			};
		}
		printf("The family %d average age is :%lf\n",family,((double)sum)/time);
	}
	return 1;
}
