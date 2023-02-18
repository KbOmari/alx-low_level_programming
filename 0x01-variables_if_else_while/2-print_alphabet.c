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
	char result;

	for (c = 'a'; c <= 'z'; ++c)
	result = tolower(c);

	printf("tolower(%c) = %c\n", c, result);
	return (0);
}
