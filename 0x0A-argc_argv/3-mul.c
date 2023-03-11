#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
