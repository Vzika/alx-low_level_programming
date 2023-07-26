#include <stdio.h>
int sum(int a, int b);

int main(void)
{
	int n;
	n = sum(10, 4);
	printf("%d\n", n);
	return (0);
}
int sum(int a, int b)
	int result;
	result = a + b;
	return (result);
	}
