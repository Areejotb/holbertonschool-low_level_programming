#include "main.h"

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to use
 *
 * Description: A NULL string is treated as an empty string.
 * If n is greater or equal to the length of s2, all of s2 is used.
 *
 * Return: pointer to the new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	res = malloc(sizeof(char) * (len1 + n + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < n; i++)
		res[len1 + i] = s2[i];
	res[len1 + n] = '\0';

	return (res);
}
