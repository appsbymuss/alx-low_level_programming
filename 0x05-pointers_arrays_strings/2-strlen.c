#include "main.h"
/**
 *_strlen - the length of a string
 *
 *Owned by muss
 *
 *return: int 
 * */
int _strlen(char *s)
{
int count = 0;
while (s[count])
	count++;

return (count);
}
