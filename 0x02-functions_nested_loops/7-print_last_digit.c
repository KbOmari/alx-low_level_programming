#include "main.h"

/**
 * print_last_digit - main code
 * @n: this is the number which has its last
 * digit printed
 *
 * Description: this returns and prints the
 * last digit of the input @int
 *
 * Return: int
 */

int print_last_digit(int n)

{
	int x = -(n % 10);

	if (x < 0)
		x = x * -1;

	_putchar('0' + x);

	return (x);
}
