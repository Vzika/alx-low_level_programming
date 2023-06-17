#include <unistd.h>
/**
  *main - 'print all possible comb of two digit'
  *Return: Always 0 (success)
  */
my_putchar char c(void)
{
	write(1, &c, 1);
}
print_comb(void)
{
	int i = 0;

	while (i <= 999)
	{
		if (i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)
		{
			my_putchar(i / 100 + '0');
			my_putchar((i / 10) % 10 + '0');
			my_putchar(i % 10 + '10');
			if (i != 789)
			{
				my_putchar(',');
				my_putchar(' ');
			}
		}
		i++;
	}
}
int main(void)
{
	print_comb();
	return (0);
}
