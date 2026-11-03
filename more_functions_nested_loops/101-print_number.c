#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int d;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	d = 1;
	while (num / d >= 10)
		d *= 10;
	while (d > 0)
	{
		_putchar(num / d + '0');
		num %= d;
		d /= 10;
	}
}
