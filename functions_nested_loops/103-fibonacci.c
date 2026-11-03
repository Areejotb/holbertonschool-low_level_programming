#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long next;
	unsigned long sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
