#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 100; j++)
	{
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		if (j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
