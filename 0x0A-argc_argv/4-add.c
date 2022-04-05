<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
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
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
=======
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
				{
					printf("Error\n");
					return (1);
				}
			}
<<<<<<< HEAD

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
=======
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
	return (0);
}
