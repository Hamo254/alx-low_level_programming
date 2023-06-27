#include <stdlib.h>
#include "main.h"
/**
 * create_array - Create array of chars and init char c with chrc.
 * @size: Size array
 * @c: Value init.
 * Return: *P array.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int x;
	char *z;

	if (size == 0)
	return (NULL);
	z = malloc(sizeof(char) * size);
	if (z == NULL)
	return (NULL);
		for (x = 0; x < size; x++)
			z[x] = c;
		return (z);

}
