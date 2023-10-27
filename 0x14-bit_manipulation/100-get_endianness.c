
#include "main.h"

/**
 * get_endianness - endianness
 *
 * Return: 0  , 1 
 */
int get_endianness(void)
{
	int x;
	char *s;

	x = 1;
	s = (char *)&x;
	return (*s);
}