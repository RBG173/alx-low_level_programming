#include "main.h"

/**
 * print_alphabet - Prints all alphabets in lowercase
 *
 * Description: This function prints all lowercase alphabets from 'a' to 'z'
 *              using the _putchar function.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
