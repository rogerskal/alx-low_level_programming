#include <stdio.h>

/**
 * main - prints the alphabet a-z in lowercase, followed by a new line.
 * Return: 0
**/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
