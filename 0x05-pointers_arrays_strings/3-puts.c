#include "main.h"
/**
 * _puts - Return the length of a string.
 * @str: Check value string.
 * Return: lnt
 */
void _puts(char *s)
{
	int x;

for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
	_putchar('\n');
}
