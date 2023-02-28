#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
	x++;
	for (i = 0; i < x; i++)
	{
		x--;
		rev = s[i];
		s[i] = s[x];
		s[x] = rev;
	}
}
