#include<stdio.h>
#include<stdlib.h>
int increment(int number);
int negate (int number);
int main ()
{
	printf("Use increment process \"10\" : %d \"0\": %d \"-10\": %d\n\n",increment(10),increment(0),increment(-10));
	printf("Use negate    process \"10\" : %d \"0\": %d \"-10\": %d ",negate(10)  ,negate(0)   ,negate(-10)    );
	system("pause");
	return 0;
}