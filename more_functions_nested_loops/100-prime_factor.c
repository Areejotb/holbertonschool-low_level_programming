#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n;
	unsigned long f;

	n = 612852475143;
	for (f = 2; f * f <= n; f++)
	{
		while (n % f == 0 && n != f)
			n /= f;
	}
	printf("%lu\n", n);
	return (0);
}
