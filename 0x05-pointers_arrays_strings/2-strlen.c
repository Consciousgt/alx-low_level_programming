#include "main.h"
/*
 * _strlen - A function that returns the lenght of a string
 *
 * @s: An integer input pointer
 *
 * Return: Nothing
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
