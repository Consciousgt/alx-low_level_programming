#include "main.h"
/**
 * _strcmp - compares rel betw two strings
 *
 * @str1: A pointer to a character that will be changed
 *
 * @str2: A pointer to a character that will also be changed/modified/updated
 *
 * Return: dest
 */
int _strcmp(char *str1, char *str2)

{
	char *str_one = str1;
	char *str_two = str2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}
