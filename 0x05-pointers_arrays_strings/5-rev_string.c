#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i = 0;
	int var;

	while (s[i] != '\0')
	{
		i++;
	}

	for (var = 0; var < i; var++)
	{
		i--;
		rev = s[var];
		s[var] = s[i];
		s[i] = rev;
	}
}
