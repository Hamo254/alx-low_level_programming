#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @x: prints from this number
*/
void print_to_98(int x)
{
	int y, z;

	if (x <= 98)
	{
		for (y = x; y <= 98; y++)
		{
			if (y != 98)
				printf("%d, ", y);
			else if (y == 98)
				printf("%d\n", y);
		}
	} else if (x >= 98)
	{
		for (z = x; z >= 98; z--)
		{
			if (z != 98)
				printf("%d, ", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
}
