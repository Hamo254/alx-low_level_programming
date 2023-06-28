#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount memory the array.
 * Return: Allocate pointer in memory.
*/
void *malloc_checked(unsigned int b)
{

	void *x;

	x = malloc(b);
	if (x == NULL)
	exit(98);
	return (x);

}
