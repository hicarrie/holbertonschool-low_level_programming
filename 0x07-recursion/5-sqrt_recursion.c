#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be evaluated
 * Return: natural square root or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_helper_sqrt(n, i));
}

/**
 * _helper_sqrt - returns the value of x raised to the power of y
 * @x: initial value
 * @y: exponent
 * Return: value of x raised to power of y or -1 if y is lower than 0
 */
int _helper_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (_helper_sqrt(x, y + 1));
}
