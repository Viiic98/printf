#include "holberton.h"

/**
 *_binary - prints a number in binary form
 *@arg: list that will contain the argument needed in order to print the binary
 *@len: Number of characters that will be printed if len > act_len print spaces
 *Return: amount of bytes printed
 */
int _binary(va_list arg, int len)
{
	int neg;
	unsigned int i = 0, bytes = 0, pow, def = 2;
	unsigned int x = va_arg(arg, unsigned int);

	neg = x;
	if (neg < 0)
		return (0);
	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	pow = _pow(def, i);
	while (pow <= x)
	{
		i++;
		pow = _pow(def, i);
	}
	i--;
	while (len > 0)
	{
		_putchar(' ');
		bytes++, len--;
	}
	bytes += print_binary(i, x);
	return (bytes);
}
/**
 * print_binary - Print the binary number of x
 * @i: number of digits
 * @x: input number
 * Return: number of bytes printed
 */
int print_binary(unsigned int i, unsigned int x)
{
	int bytes = 0, index = i;
	unsigned int pow;

	while (index >= 0)
	{
		pow = _pow(2, i);
		if (pow <= x)
		{
			x -= _pow(2, i);
			_putchar('1');
			bytes++;
		}
		else
		{
			_putchar('0');
			bytes++;
		}
		index--, i--;
	}
	return (bytes);
}
