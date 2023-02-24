#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
