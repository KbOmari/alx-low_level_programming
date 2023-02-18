#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: 0
 */


int main(void)

{
	int x, i;

	for (x = 0; x < 9; x++)

	{
	for (i = x + 1; i < 10; i++)

	{
	putchar((x % 10) + '0');
	putchar((i % 10) + '0');

	if (x == 9 && i == 9)
	continue;

	putchar(',');

	putchar(' ');
	}

	}
	putchar('\n');
	return (0);

}
