#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int _sqrt_recursion(int n)
{
	return (muss_in_house(n, 0));
}

/**
 * muss_in_house - function added
 * @n: the number
 * @s: root
 * Return: the natural square root of n
 * On error, -1 is returned.
 */
int muss_in_house(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	else if (s * s > n)
	{
		return (-1);
	}
	else
	{
		return (muss_in_house(n, s + 1));
	}
}
