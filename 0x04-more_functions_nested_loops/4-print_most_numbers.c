#include "main.h"
/**
 * print_most_numbers -function prints numbers from 0-9
 *
 * Return: 0-9, excluding 2 and 4
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if ((c == 2) || (c == 4))
			continue;
		else
			_putchar(c + '0');
	}
	_putchar('\n');
}
