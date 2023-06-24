#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}

