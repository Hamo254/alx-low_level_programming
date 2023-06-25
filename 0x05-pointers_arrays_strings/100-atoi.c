#include "main.h"
#include <stdio.h>

/**
 *_atoi - Swap values.
 *@s: Size.
 *Return: Pointer.
 */
int _atoi(char *s)
{
	int a = 0, len = 0, num = 0, sign = 1, ok = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (a < len && ok == 0)
	{
		if (s[a] == '-')
			sign *= -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = num * 10 + sign * (s[a] - 48);
			if (s[a + 1] >= '0' && s[a + 1] <= '9')
				ok = 0;
			else
				ok = 1;
		}
		a++;
	}
	return (num);
}
