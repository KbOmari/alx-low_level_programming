#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *
 *
 *Description: Adds postive command-line arg numbers
 *
 *Return: 1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1) /* argc == 1 is the program name only*/
	{
		printf("O\n");
		return (0);
	}
	for (i = 1; i < argc; i++)/*to loop through each argument*/
	{
		char *arg = argv[i];/*points to individual characters in argv[i] strings*/
	
	while (*arg)
	{
		if (!isdigit(*arg))/*checks if string is wholly numbers*/
		{
			printf("Error\n");
			return (1);
		}
		arg++;
	}
	
	sum += atoi(argv[i]); /* picks from for loop*/


	}

	printf("%d\n", sum);
		return (0);
}
