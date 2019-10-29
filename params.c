#include "holberton.h"

/**
 *_char - prints a char
 *@arg: list that contains the argument that will be printed
 *@len: Size specified to printf (spaces if len > char)
 *Return: amount of bytes printed
 */
int _char(va_list arg, int len)
{
	unsigned char c = va_arg(arg, int);

	while (len > 1)
	{
		write(1, " ", 1);
		len--;
	}
	write(1, &c, 1);
	return (1);
}

/**
 * _str - prints a string
 * @arg: list that contains the argument that will be printed
 * @len: Size specified to print (Spaces if len > string)
 *Return: amount of bytes printed
 */
int _str(va_list arg, int len)
{
	const char *str;
	int i;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (*str == '\0')
		return (-1);
	i = _strlen(str);

	while (len > i)
	{
		write(1, " ", 1);
		len--;
	}

	write(1, str, i);
	return (i);
}

/**
 * _int - prints an int
 * @arg: list that contains the argument that will be printed
 * @len: Size specified to print (Spaces if len > string)
 * Return: amount of bytes printed
 */
int _int(va_list arg, int len)
{
	int x = va_arg(arg, int);

	return (print_number(x, len));
}
