#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int u = 0;
	int v = n;


	for (; u < v; u++)
	{
		dest[u] = src[u];
		n--;
	}
	return (dest);
}
