#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0
**/

int main(void)
{
	int i, k;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')

	{
		putchar("%d%d",i,k);

		{
			putchar (',');

			putchar (' ');
		}
	}
	}
	}
		putchar('\n');

	return (0);
}
