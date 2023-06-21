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
		_putchar(num + '0');
	}
	else
	{
		_putchar((num / 10) + '0');
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
				_putchar(',');
				_putchar(' ');

				k = j * i;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					print_number(k);
				}
				else if (k < 100)
				{
					_putchar(' ');
					print_number(k);
				}
				else
				{
					print_number(k);
				}
			}
			_putchar('\n');
		}
	}
}
