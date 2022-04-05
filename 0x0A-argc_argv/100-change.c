#include "main.h"
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;
=======

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count for main
 * @argv: vector to the arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int cents = 0;
	int coin[5] = {25, 10, 5, 2, 1};
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

<<<<<<< HEAD
	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(i);

		printf("%d\n", coin);
	}

=======
	num = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (num / coin[i] > 0)
			{
				cents += num / coin[i];
				num = num % coin[i];
			}
		}
		printf("%d\n", cents);
>>>>>>> f52dc054f46ecc6b28e8f359f55496448369599b
	return (0);
}
