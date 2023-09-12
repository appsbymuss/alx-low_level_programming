#include "main.h"

/**
 * print_alphabet - function prints alphabet using _putchar
 *
 * Description: Function prints alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	for (char c = 97; c <= 122; c++)
		_putchar(c);
	_putchar('\n');
}
