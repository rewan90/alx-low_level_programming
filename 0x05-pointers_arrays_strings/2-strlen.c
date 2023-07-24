#include "main.h"

/**
 * _strlen - length of a string
 * Return: void
*/


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
