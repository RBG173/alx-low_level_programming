#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 * Description: This function prints the times table of n, starting from 0,
 *              up to a maximum of 15.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
		print_times_row(i, n);
}

/**
 * print_times_row - prints a single row of the times table
 * @row_num: the number of the row to print
 * @n: number of the times table
 */
void print_times_row(int row_num, int n)
{
	for (int i = 0; i <= n; i++)
	{
		int result = row_num * i;
		print_times_entry(result);
	}
	_putchar('\n');
}

/**
 * print_times_entry - prints a single entry in the times table
 * @entry: the value of the entry to print
 */
void print_times_entry(int entry)
{
	if (entry < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(entry + '0');
	}
	else if (entry < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((entry / 10) + '0');
		_putchar((entry % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((entry / 100) + '0');
		_putchar(((entry / 10) % 10) + '0');
		_putchar((entry % 10) + '0');
	}
}
