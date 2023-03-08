#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - returns if a number is primw
 * @n: the return number is checked
 * return: integer value
 *
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if the number is prime
 * @n: the return number is checked
 * @i: the iteration items
 * return: 1 for prime or 0 composite
 *
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
