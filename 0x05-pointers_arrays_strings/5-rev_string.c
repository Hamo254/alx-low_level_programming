#include "main.h"
/**
 * rev_string - Function that reverses a string.
 * @s: Check value string
 */
void rev_string(char *s)
{
	int a, length;

	char tmp;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
		length++;

	for (a = 0; a < length; a++)
		{
		tmp = s[a];
		s[a] = s[length - 1];
		s[length - 1] = tmp;
		length--;
		}
}
