#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digits
 * @str: array str
 * Return:always 0 (success)
 */

int check_num(char *str)
{
	/*delaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
	if (!isdigit(str[count])) /*check if str there aredigit*/
	{
	return (0);
	}
	count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declaring variable*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
	if (check_num(argv[count]))

	{
	str_to_int = atoi(argv[count]); /*ATIO --> converts string to int*/
	sum += str_to_int;
	}
	/*condition if one number contains symbols that are not digits*/
	else
	{
	printf("Error\n");
	return (1);
	}

	count++;

	}
	printf("%d\n", sum); /*print sum*/

	return (0);
}
