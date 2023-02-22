#include "main.h"

/**
 *times_table - displays the time table
 *
 *Description: Nine multiplication table
 *
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');

		for (y = 1; y < 10; y++)
		{	_putchar(',');
			_putchar(' ');

			z = x * y

			if (z <= 9)

				_putchar(' ');
			else
				_putchar('0' + (z / 10));

			_putchar('0' + (result % 10));
		}
	putchar('\n');

	}

}