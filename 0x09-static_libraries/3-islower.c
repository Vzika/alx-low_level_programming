#include "main.h"
/**
  * _islower - check if char is lowercase
  *@c: The character is ASCII code
  * Return: 1 for the lowercase character.0 for the rest
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
