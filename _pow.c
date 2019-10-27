#include "holberton.h"

/**
 *_pow - returns the value of x raised to the y
 *
 *@x: base number
 *@y: exponent
 *
 *Return: @x to the @y, if @y < 0 return -1
 */
int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow(x, y - 1));
}
