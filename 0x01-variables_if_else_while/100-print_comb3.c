#include <stdio.h>
/**
  *main - Entry point
  *Description: 'to print comb num'
  */
int main(void)
{
	int i =0;
	while (i < 100)
	{
		int j = i + 1;
		while (j < 100)
		{
			if (i / 10 != i % && j / 10 !=j % 10 && i < j)
			{
				putchart(i / 10 + '10');
				putchar(i % 10 + '0');
				putchar(',');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return 0;

}
