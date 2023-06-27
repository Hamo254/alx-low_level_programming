#include "main.h"
/**
 * _strcat - Funtion string.
 * @dest: destiny value.
 * @src: String value.
 * Return: dest.
*/
char *_strcat(char *dest, char *src)
{
	int x, src_lnt, dest_lnt;
/* src 12 */
	src_lnt = 0;
		for (x = 0; src[x] != '\0'; x++)
			src_lnt++;
/* dest 1 */
	dest_lnt = 0;
		for (x = 0; dest[x] != '\0'; x++)
			dest_lnt++;
/* print dest */
		for (x = 0; x <= src_lnt; x++)
			dest[dest_lnt + x] = src[x];


		return (dest);

}
