#include "main.h"
/**
 *_islower - entry point
 *
 *@c: character to be checked
 *
 *Description: Program that checks for lowercase character
 *
 *Return: (results)
*/

int _islower(int c)
{

	int results;

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	return (results);
}
