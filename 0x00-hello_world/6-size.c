#include <stdio.h>
/**
  *main - Entry point
  *Return: always (0)
  */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n)", sizeof(c));
	printf("size of int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n)", sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
