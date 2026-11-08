#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	while (s[i] != '\0')
	{
		j = 0;
		while (separators[j] != '\0')
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (s);
}
