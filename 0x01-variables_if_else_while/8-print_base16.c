#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0
*/

int main(void)
{
	int i;
	char h;

	for (i = 48; i < 58; i++)
	{

		putchar(i);

	}

	for (h = 'a'; h <= 'f'; h++)
	{

		putchar(h);

	}

	putchar('\n');

	return (0);
}
