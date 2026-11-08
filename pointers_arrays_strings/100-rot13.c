#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == data[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
