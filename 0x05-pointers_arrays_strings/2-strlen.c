#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: _strlen
 * return: _strlen
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
