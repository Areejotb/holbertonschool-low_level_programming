#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long a;
	unsigned long b;
	unsigned long next;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		printf("%lu", a);
		if (i != 49)
			printf(", ");
		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
