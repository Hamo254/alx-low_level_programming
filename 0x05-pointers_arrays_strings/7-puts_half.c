#include "main.h"
/**
 * puts_half - Should print the second half of the string.
 * @str: Check value string.
 */
void puts_half(char *str)
{
	int a, lnt;

	lnt = 0;
	for (a = 0; str[a] != '\0'; a++)
		lnt++;

	for (a = (lnt + 1) / 2; a < lnt; a++)
		_putchar(str[a]);


	_putchar('\n');
}
