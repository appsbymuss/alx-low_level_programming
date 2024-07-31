#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: use putchar to print words by theire code ASCII
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
