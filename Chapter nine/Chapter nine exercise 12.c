/*******************************************************************************

 Code Writer :The . L;

 <Pointers On C>  Chapter nine programe exercise 12

 If this somewhere in this code could change into better condition,please touch me.

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZEOFALPHABET 26
#define FALSE 0
#define TURE  1
int prepare_key(char* key);
int main()
{
	//prepare_key("TRAILBLAZERS"); //Just for testing
	return 0;
}

int prepare_key(char* key)
{
	int temp     = 0;									//just set for "for clrcle" variabel
	int counter  = 0;
	int num      = 0;
	int remaining= 0;
	char* code	 = NULL;
	char* answer = NULL;
	char* buffer = NULL;
	char alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	for(counter = 0;key[counter] != '\0';counter++)
	{

	}

	buffer = (char*)malloc(counter*sizeof(char));
	//apply for some memory to RAM manager and use it for uppper character,
	//compiler forbiding this code like :key[counter] = toupper(key[counter]);
	//you can not acess the same memory at the same time!

	code   = (char*)malloc(SIZEOFALPHABET*sizeof(char));
	answer = (char*)malloc(SIZEOFALPHABET*sizeof(char));

	for(counter = 0;key[counter] != '\0';counter++)
	{
		buffer[counter] = toupper(key[counter]);
	}

	for(temp = 0 ;temp<counter;temp++)
	{
		code[temp] = 1;
	}

	remaining = counter;

	for(temp = 0;temp<counter;temp++)
	{
		for(num = temp+1;num<counter;num++)
		{
			if(key[temp] == key[num])					//if repeated,set the signal of this position down to zero
			{
				code[num] = 0;
				remaining--;							//store how many character not repeat with each other
			}
		}
	}

	for(temp = 0,num = 0;temp<counter;temp++)
	{
		if(code[temp] == 1)
		{
			answer[num] = buffer[temp];					//copy the characters that are not repeated
			num++;
		}
	}

	for(temp = 0 ;temp<SIZEOFALPHABET;temp++)
	{
		code[temp] = 1;
	}

	counter = remaining;

	for(num = 0;num<counter;num++)
	{
		for(temp = 0;temp<SIZEOFALPHABET;temp++)
		{
			if(answer[num] ==alphabet[temp])
			{
				code[temp] = 0;						    //if repeated,set the signal of this position down to zero
			}
		}
	}

	for(temp = 0;temp<SIZEOFALPHABET;temp++)
	{
		if(code[temp] == 1)
		{
			answer[counter] = alphabet[temp];			//if the character in alphabet  is not repeated ,copy them into the empty space in answer
			counter++;
		}
	}
	/*  //just for viewing the amswer
	for(temp = 0;temp<SIZEOFALPHABET;temp++)
	{
		printf("%c",answer[temp]);
	}*/

	for(temp = 0;temp<SIZEOFALPHABET;temp++)
	{
		if( (isspace(answer[temp])) || (!isupper(answer[temp])))		//just check string include empty character and lower characert or not
		{
			return FALSE;
		}
	}

	free(answer);												//need not to say..............
	free(code);
	free(buffer);

	return TURE;
}
