#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: The number to start printing from.
 *
 * Description: This function prints all natural numbers from the given number 'n'
 *              up to 98, inclusively. If 'n' is less than or equal to 98, it will
 *              print all numbers from 'n' to 98 in ascending order. If 'n' is greater
 *              than 98, it will print all numbers from 'n' to 98 in descending order.
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
