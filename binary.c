#include "holberton.h"

/**
 *_binary - prints a number in binary form
 *@arg: list that will contain the argument needed in order to print the binary
 *@len: Number of characters that will be printed if len > act_len print spaces
 *Return: amount of bytes printed
 */
int _binary(va_list arg, int len)
{
	int i = 0;
	int x = va_arg(arg, int);

	while (_pow(2, i) <= x)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (_pow(2, i) <= x)
		{
			x -= _pow(2, i);
			_putchar('1');
		}
		else
			_putchar('0');
		i--;
	}
	return (len);
}

