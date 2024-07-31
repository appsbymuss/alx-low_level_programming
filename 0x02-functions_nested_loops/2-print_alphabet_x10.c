#include "main.h"

/**
 * print_alphabet_x10 - function prints 10x alphabets
 *
 * Description: this funion call print_alphabet function 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
