#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabets in lowercase using the _putchar, 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = 26;
	int counter;
	int i = 0;

	while (i < 10)
	{
		counter = 0;

		while (counter < len)
		{
			_putchar(alphabets[counter]);
			counter++;
		}

		_putchar('\n');
		i++;
	}
}
