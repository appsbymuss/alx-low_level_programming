#include "main.h"

/**
 * print_line - Display a dash line
 *
 * @n: input int ( number of _)
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	int c;
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
}
