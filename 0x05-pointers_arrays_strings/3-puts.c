#include "main.h"
/**
 * _puts - print, followed by a new line, stdio
 * @str: string print
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
