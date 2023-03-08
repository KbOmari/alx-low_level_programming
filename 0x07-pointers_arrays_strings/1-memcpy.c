#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array
 * @src: char array
 * @n: no of elements to copy
 * Return: `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)

	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
