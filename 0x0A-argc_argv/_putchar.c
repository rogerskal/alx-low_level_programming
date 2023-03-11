#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the characher to print
 * return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
