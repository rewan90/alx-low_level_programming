#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @b: number 
 * @index: index  to set bit
 *
 * Return: 1 worked, or -1 error 
 */
int clear_bit(unsigned long int *b, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*b = *b & set;
	return (1);
}