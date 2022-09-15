#include "main.h"
/**
 * _islower - function to check lowercase character
 *
 * @low: is the int that is used for argument of the function
 *
 * Return: 0
 *
 */
int _islower(int low)
{
	if (low >= 'a' && low <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
