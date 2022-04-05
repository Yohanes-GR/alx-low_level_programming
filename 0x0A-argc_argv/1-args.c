<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
	return (0);
}
