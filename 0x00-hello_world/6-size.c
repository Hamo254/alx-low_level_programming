#include <stdio.h>
/**
  * main - prints the size of various types
  * Return: 0
 */
int main(void)
{
	char c;
	int n;
	long int i;
	long long int l;
	float f;

	printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a int: %zu byte(s)\n", (unsigned long)sizeof(n));
	printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
