#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - program starts
 *
 *@argc: prints argument count
 *@argv: prints argument string
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{

		int y = atoi(argv[1]);
		int x = atoi(argv[2]);

		printf("%d\n", y * x);
	}
	return (0);
}
