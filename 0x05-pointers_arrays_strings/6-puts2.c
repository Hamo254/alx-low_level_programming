#include "main.h"
/**
 * puts2 - Prints character of a string mod 2.
 * @str: Check value string.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		{
		if (a % 2 == 0)
			_putchar(str[a]);
		}
		_putchar('\n');
}
