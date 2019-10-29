#include "holberton.h"

/**
 * hexa - Convert decimal to hexadecimal
 * @x: decimal number
 * Return: print the hexadecimal number
 */
int hexa(int x)
{
	int i, res, bytes = 0;
	char hex[100], *def = "0", *_hex;

	for (i = 0; x != 0; i++)
	{
		res = x % 16;
		if (res < 10)
			hex[i] = res + 48;
		else
			hex[i] = res + 55;
		x /= 16;
	}
	i--;
	_hex = hex;
	if (i == 0)
	{
		write(1, def, 1);
		bytes++;
	}
	while (i >= 0)
	{
		write(1, _hex, 1);
		_hex++, i--, bytes++;
	}
	return (bytes);
}
