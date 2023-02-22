#include "main.h"
/**
 *_isalpha - entry point
 *
 *@c: the characters to be checked
 *
 *Description: Checks for alphabetic character
 *
 *Return: 1 if character is a letter,0 if otherwise
 */


int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		result = 1;
	else
		result = 0;

	return (result);
}
