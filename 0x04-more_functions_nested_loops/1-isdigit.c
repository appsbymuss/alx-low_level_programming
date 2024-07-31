#include "main.h"
/**
*_isdigit - checking if input is digit
*
*@c: input type char
*
*Return: 1 if true 0 if false
*/

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
