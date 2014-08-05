/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter thirteen programe exercise 4

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int float_compare(void* num1,void* num2);
int int_compare(void* num1,void* num2);
void Sort(void *Array,int length,int ElementSize,int (*compare)(void* num1,void* num2));
int main()
{
	int (*Function[])(void* num1,void* num2) =
	{
		int_compare,
		float_compare
	};

	int   tomato[10] = {1,5,3,6,8,3,5,7,9,3};
	float apple[20] = {23,42,4,78,4,6,22,5.9,34.22,23.555};

	Sort(tomato,sizeof(tomato),sizeof(tomato[0]),Function[0]);

	Sort(apple,sizeof(apple),sizeof(apple[0]),Function[1]);

	return 0;
}

void Sort(void* Array,int length,int ElementSize,int (*compare)(void* num1,void* num2))
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0;i<length/ElementSize;i++)
	{
		for(j = i+1;j<length/ElementSize;j++)
		{
			if(compare((int*)(Array)+i,(int*)(Array)+j) == 1&& compare ==int_compare)
			{
				temp 	 = *((int*)(Array)+i);
				*((int*)(Array)+i) = *((int*)(Array)+j);
				*((int*)(Array)+j) = temp;
			}
			else if(compare((float*)(Array)+i,(float*)(Array)+j) == 1&& compare == float_compare)
			{
				temp 	 = *((float*)(Array)+i);
				*((float*)(Array)+i) = *((float*)(Array)+j);
				*((float*)(Array)+j) = temp;
			}
		}
	}

	if(compare == int_compare)
	{
		for(temp = 0;temp<length/ElementSize;temp++)
		{
			printf("%d\t",*((int*)(Array)+temp));
		}
	}
	else if(compare == float_compare)
	{
		for(temp = 0;temp<length/ElementSize;temp++)
		{
			printf("%lf\t",*((float*)(Array)+temp));
		}
	}

}

int int_compare(void* num1,void* num2)
{
	if(*(int*)num1 > *(int*)num2)
	{
		return 1;
	}
	else if(*(int*)num1 < *(int*)num2)
	{
		return -1;
	}
	else
	{
		return 0;
	}

	return 0;
}

int float_compare(void* num1,void* num2)
{
	if( *(float*)num1 > *(float*)num2)
	{
		return 1;
	}
	else if(*(float*)num1 < *(float*)num2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
	return 0;
}
