#include<stdio.h>
#include"main.h"
/**
  * main -to multiply two numbers
  * @argc-number to be multiplied
  * @argv - number to be multipled
  * Return: always(0)
  */

int main(int argc, char * argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
	}
	else if( argc == 3)
	{
		printf("%d\n",(argv[1]) * (argv[2]));
	}
}
