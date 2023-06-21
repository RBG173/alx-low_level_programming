#include "main.h"

/**
 * print_number - Prints a number
 * @num: The number to be printed
 *
 * Description: This helper function prints a number.
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of the times table.
 *
 * Description: This function prints the multiplication table of numbers
 * from 0 to n.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = j * i;
				print_number(k);
			}
			_putchar('\n');
		}
	}
}
