#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, x;

		for (i = 1; i <= size; i++)
		{
			for (x = i; x < size; x++)
			{
				_putchar(' ');
			}

			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
