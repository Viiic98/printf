#include "holberton.h"

/**
 *_pow - returns the value of x raised to the y
 *
 *@x: base number
 *@y: exponent
 *
 *Return: @x to the @y, if @y < 0 return -1
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int pow;

	if (y == 0)
	{
		return (1);
	}
	pow = x * _pow(x, y - 1);
	return (pow);
}
