#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

	int len, i, j;
	char rev;

	for (len = 0; s[len] != '\0'; len++)
	;

	i = 0;

	j = len / 2;

	while (j--)
	{
		rev = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = rev;
		i++;
	}

}
