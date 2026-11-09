#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the matrix, stored row after row
 * @size: width and height of the matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long main_sum;
	long second_sum;

	main_sum = 0;
	second_sum = 0;
	for (i = 0; i < size; i++)
	{
		main_sum += a[i * size + i];
		second_sum += a[i * size + (size - 1 - i)];
	}

	printf("%ld, %ld\\n", main_sum, second_sum);
}
