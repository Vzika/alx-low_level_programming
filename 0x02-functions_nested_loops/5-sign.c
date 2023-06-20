#include "main.h"
/**
  *print_sign - To know if the input is greater,equal or less than zero
  * @n: The input number as an interger.
  * Return: 1 is greater than zero. 0 is zero.
  * -1 is less tha 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
