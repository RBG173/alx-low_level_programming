#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of the times table.
 *
 * Description: This function prints the multiplication table for the given
 *              number 'n'. The table starts from 0 and goes up to 'n'. It
 *              follows a specific format where each product is aligned and
 *              padded with spaces. The function only works for values of 'n'
 *              between 0 and 15, inclusively.
 */
void print_times_table(int n)
{
    int i, j, k;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                k = j * i;
                if (j == 0)
                {
                    _putchar(k + '0');
                }
                else if (k < 10 && j != 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(k + '0');
                }
                else if (k >= 10 && k < 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar((k / 10) + '0');
                    _putchar((k % 10) + '0');
                }
                else if (k >= 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar((k / 100) + '0');
                    _putchar(((k / 10) % 10) + '0');
                    _putchar((k % 10) + '0');
                }
            }
            _putchar('\n');
        }
    }
}
