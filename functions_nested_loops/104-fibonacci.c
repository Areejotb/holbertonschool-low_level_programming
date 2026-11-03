#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long base;
	unsigned long a_hi;
	unsigned long a_lo;
	unsigned long b_hi;
	unsigned long b_lo;
	unsigned long n_hi;
	unsigned long n_lo;

	base = 10000000000UL;
	a_hi = 0;
	a_lo = 1;
	b_hi = 0;
	b_lo = 2;
	for (i = 0; i < 98; i++)
	{
		if (a_hi > 0)
			printf("%lu%010lu", a_hi, a_lo);
		else
			printf("%lu", a_lo);
		if (i != 97)
			printf(", ");
		n_lo = a_lo + b_lo;
		n_hi = a_hi + b_hi + n_lo / base;
		n_lo = n_lo % base;
		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = n_hi;
		b_lo = n_lo;
	}
	printf("\n");
	return (0);
}
