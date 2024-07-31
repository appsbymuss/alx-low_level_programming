#include "main.h"
/**
* print_sign -show sign of number
*
* @n: input to check if positif or negative or natural
*
* Return: 1 if n is positif, 0 nuteral, -1 negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
