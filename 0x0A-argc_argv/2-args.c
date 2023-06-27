#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Command line arguments.
 * Return: 0.
*/
int main(int argc, char *argv[])
{

	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);

}
