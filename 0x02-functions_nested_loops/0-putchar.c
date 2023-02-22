#include "main.h"

/**
 *main - Entry point
 *
 *Description: Program that prints _putchar, followed by a new line
 *
 *Return: Always (0) Success
 */


int main(void)

{
	char string[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int x = 0;

	while (x < 8)
	{
		_putchar(string[x]);
		x++;
	}

	_putchar('\n');

	return (0);
}
