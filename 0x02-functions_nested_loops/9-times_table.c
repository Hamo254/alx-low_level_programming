#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return:
 */
void times_table(void)
{

	int a;

	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((a * b) < 10)
				_putchar(' ');

				else
				
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');

				if (b == 9)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
