#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @alpha: The character to be checked
 *
 * Return: 1 if character is an alphabet, lowercase or UPPERCASE, 0 otherwise.
 *
 */
int _isalpha(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
		return (1);
	else
		return (0);
}

