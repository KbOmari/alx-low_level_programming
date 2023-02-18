#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Determine whether a n is positive or negative or equal to zero
 *
 *Return: Always (0) Success
 */

int main(void)



{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);
	
	if (n > 0)
	{
	printf("n is positive\n");
	}
	else if (n == 0)
	{
	printf("n is zero\n");
	}
	else
	{
	printf("n is negative\n");
	}
	return (0);
}
