#include "main.h"

/**
 * set_bit - sets the value for a bit 1 at a given index.
 * @b: number to set
 * @index: index to bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *b, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*b = *b | set;
	return (1);
}