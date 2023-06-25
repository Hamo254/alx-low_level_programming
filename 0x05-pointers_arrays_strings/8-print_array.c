#include <stdio.h>
#include "main.h"
/**
 * print_array - Print n elements of an array of integers
 * @a: Check array value
 * @n: Check value element.
 */
void print_array(int *a, int n)
{
	int x;

		for (x = 0; x < n; x++)
		{
			printf("%d", a[x]);
			if (x < n - 1)
				printf(", ");
		}


	printf("\n");
}
