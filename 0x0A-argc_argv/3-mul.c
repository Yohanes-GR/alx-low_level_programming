<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int i, j;

	if (argc == 1 || argc == 2)
=======
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
=======
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
}
