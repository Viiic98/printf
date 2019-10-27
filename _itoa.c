#include "holberton.h"

/**
 *_itoa - converts an int to a string of char and prints it
 *@x: integer that will be converted
 *Return: nothing
 */
void _itoa(int x)
{
	char s[11];
	int i = 0;

	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}
	while (x != 0)
	{
		s[i] = x % 10 + 48;
		x = x / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, (s + i), 1);
		i--;
	}
}
