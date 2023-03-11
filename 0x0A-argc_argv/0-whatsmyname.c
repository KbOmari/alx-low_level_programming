#include "main.h"
#include <stdio.h>

/**
 *main - prints the name of a program
 *
 *@argc: argument count
 *@argv: prints string (filename)
 *
 *Return: O.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
