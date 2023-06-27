#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str equals NULL(insufficient memory) - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		dup[x] = str[x];

	dup[len] = '\0';

	return (dup);
}
