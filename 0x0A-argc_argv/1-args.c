#include <stdio.h>
#include "main.h"

/**
 *main - prints count and strings of arguments
 *
 *@argc: prints count of arguments
 *@argv: prints strings of arguments
 *
 *Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
