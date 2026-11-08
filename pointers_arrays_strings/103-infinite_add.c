#include "main.h"

/**
 * infinite_add - adds two positive numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if it does not fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int pos;
	int sum;
	int carry;

	if (size_r < 1)
		return (0);
	i = 0;
	while (n1[i + 1] != '\0')
		i++;
	j = 0;
	while (n2[j + 1] != '\0')
		j++;
	pos = size_r - 1;
	r[pos] = '\0';
	pos--;
	carry = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		if (pos < 0)
			return (0);
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[pos--] = (sum % 10) + '0';
		carry = sum / 10;
	}
	return (r + pos + 1);
}
