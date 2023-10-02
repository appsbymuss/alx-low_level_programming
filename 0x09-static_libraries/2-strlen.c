#include "main.h"
/**
 *_strlen - the length of a string
 *
 *Owned by muss
 *@s: input pointer int
 *Return: count varible int
 */
int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
