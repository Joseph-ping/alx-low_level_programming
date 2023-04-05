#include "main.h"

int actual_prime(int x, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if x is a prime number, 0 if not
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	return (actual_prime(x, x - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @x: number to evaluate
 * @i: iterator
 *
 * Return: 1 if x is prime, 0 if not
 */
int actual_prime(int x, int i)
{
	if (i == 1)
		return (1);
	if (x % i == 0 && i > 0)
		return (0);
	return (actual_prime(x, i - 1));
}
