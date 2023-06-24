#include "main.h"
/**
 * print_rev - Print a string in reverse.
 * @s: Check value string.
 */
void print_rev(char *s)
{
	int a, lnt;

	lnt = 0;
	for (a = 0; s[a] != '\0'; a++)
		lnt++;

	for (a = lnt - 1; a >= 0; a--)
			_putchar(s[a]);

	_putchar('\n');
}
