#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: A function that prints lowercase alphabets followed by new line
 *
 */


void print_alphabet(void)
{

	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)

	{
		_putchar(letter);

	}
		_putchar('\n');
}
