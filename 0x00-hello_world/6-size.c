#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 'C program that prints the size of various data types'
 *
 *Return: Always 0 (Success)
 */


int main(void)

{
	printf("Size of int: %ld bytes\n", sizeof(int));

	printf("Size of long int: %ld bytes\n", sizeof(long int));

	printf("Size of long long int: %ld bytes\n", sizeof(long long int));

	printf("Size of float: %ld bytes\n", sizeof(float));

	printf("Size of char: %ld bytes\n", sizeof(char));

	return (0);
}
