#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *st, char *src)
{
	char *c = st;

	while (*st != '\0')
	{
		st++;
	}
	while (*src != '\0')
	{
		*st = *src;
		st++;
		src++;
	}
	*st = '\0';
	return (c);
}
