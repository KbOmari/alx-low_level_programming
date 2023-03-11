#include <stdio.h>
#include "main.h"

/**
 *main - prints argument counts and strings
 *
 *@argc: Prints argument count
 *@argv: prints argument strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc > 0)
	{

		for (x = 0; x < argc; x++)
	{

		printf("%s\n", argv[x]);

	}

	}
	return (0);
}
