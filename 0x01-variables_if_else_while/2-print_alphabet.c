#include <stdio.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Description: Printing alphabets in lower case
 *
 *Return: Always (0) Success
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)

	putchar (c);
	putchar ('\n');
	return (0);
}
