#include "holberton.h"

/**
 * print_number - prints integers
 * @n: input number
 * @len: Number of characters that will be printed if len > bytes
 * Return: number of bytes printed
 */
int print_number(int n, int len)
{
	int a = n, bytes = 0;
	int divisor = 1;

	if (n < 0)
	{
		divisor = -divisor;
		_putchar('-');
		while (a < -9)
		{
			a = a / 10;
			divisor = divisor * 10;
			bytes++;
		}
		while (len > bytes)
		{
			_putchar(' ');
			len--;
		}
		while (divisor < -1)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor = divisor / 10;
		}
		_putchar((n % 10) * -1 + '0');
	}
	if (n >= 0)
	{
		while (a > 9)
		{
			a = a / 10;
			divisor = divisor * 10;
		}
		while (divisor > 1)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor = divisor / 10;
		}
		_putchar(n % 10 + '0');
	}
	return (bytes);
}
