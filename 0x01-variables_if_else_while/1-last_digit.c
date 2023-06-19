#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: 'To print the last number'
 *Return: Always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("greater than 5");
	}
	else if (ld == 0)
	{
		printf("0");
	}
	else
	{
		printf("less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
