<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
	return (0);
}
