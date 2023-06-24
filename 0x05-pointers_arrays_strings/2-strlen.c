#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: Check value string
 * Return: lnt
 */
int _strlen(char *s)
{
	int a, lnt;

	lnt = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		lnt++;
	}
	return (lnt);
}
