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
	int number;

	number = n % 10;

		if (number < 0)
			_putchar('0' + number);
		return (number);
}
