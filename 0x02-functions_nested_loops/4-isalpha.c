nclude "main.h"

/**
 * _isalpha - checks for alphabetic characher
 * @c: the characher to be checked
 * return: 1 for alphabetic characher or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >=65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
