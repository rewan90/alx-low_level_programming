#include "main.h"

/**
 * flip_bits - number of different bits
 * @f: first num
 * @s: second num
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = f ^ s;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}