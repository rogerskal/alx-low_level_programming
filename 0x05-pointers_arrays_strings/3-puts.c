#include "main.h"
/**
 * _puts - print, followed by a new line, stdio
 * @str: string print
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
