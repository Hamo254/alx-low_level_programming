#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src.
 * @dest: Destination string.
 * @src: Source string.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int a;

		for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
		dest[a] = src[a];


		return (dest);
}
