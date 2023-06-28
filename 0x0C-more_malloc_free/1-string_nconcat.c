#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c_cat;
	unsigned int len = n, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d = 0; s1[d]; d++)
		len++;

	c_cat = malloc(sizeof(char) * (len + 1));

	if (c_cat == NULL)
		return (NULL);

	len = 0;

	for (d = 0; s1[d]; d++)
		c_cat[len++] = s1[d];

	for (d = 0; s2[d] && d < n; d++)
		c_cat[len++] = s2[d];

	c_cat[len] = '\0';

	return (c_cat);
}
