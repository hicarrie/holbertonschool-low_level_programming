#include "holberton.h"

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * @n: integer to be evaluated
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_helper_prime(n, 2));
}

/**
 * _helper_prime - finds prime number
 * @x: integer to be evaluated
 * @y: iteration
 * Return: 1 or 0
 */
int _helper_prime(int x, int y)
{
	if (x % y == 0)
		return (0);
	else if (y * y > x)
		return (1);
	return (_helper_prime(x, y + 1));
}
