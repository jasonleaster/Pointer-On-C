/*******************************************************************************

 Code Writer :The . L

 <Pointers On C>  Chapter fourteen programe exercise 5

 ---------------------------------------------------------------------------------
 If somewhere in This code could be changed into better condition,please touch me.
 ---------------------------------------------------------------------------------

 E-mail:liuzijianlinux@gmail.com

 Blog:  http://blog.csdn.net/cinmyheart
********************************************************************************/
#include<stdio.h.>
#include<stdlib.h>
#define BUFFERSIZE 200
int main ()
{
	char buf[BUFFERSIZE];
	int num  = 0;
	int temp = 0;
	FILE* input ;
	FILE* output;
	input  = fopen("E:\\input.txt","r");//the more simple the path of the file is the better programe run 
	output = fopen("E:\\output.txt","w");
	if(input==NULL || output == NULL)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	while(fgets(buf,BUFFERSIZE-1,input) != NULL)
	{
		if(sscanf(buf,"%d",&temp) == 1)
		{
			num+=temp;
		}
		fputs(buf,output);
	}
	
	fprintf(output,"\n%d",num);


	if(fclose(input) !=0 ||fclose(output) != 0)
	{
		perror("fclose");
		exit(EXIT_FAILURE);
	}

	return 0;
}
