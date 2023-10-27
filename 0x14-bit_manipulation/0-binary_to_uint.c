#include "main.h"

/**
 * binary_to_uint - convert binary to an unsigned int.
 * @bv: pointer to a string binary number
 *
 * Return: unsigned int with decimal val
 */
unsigned int binary_to_uint(const char *bv)
{
	int i;
	unsigned int num;

	num = 0;
	if (!bv)
		return (0);
	for (i = 0; bv[i] != '\0'; i++)
	{
		if (bv[i] != '0' && bv[i] != '1')
			return (0);
	}
	for (i = 0; bv[i] != '\0'; i++)
	{
		num <<= 1;
		if (bv[i] == '1')
			num += 1;
	}
	return (num);
}