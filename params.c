#include "holberton.h"

/**
 *_char - prints a char
 *@arg: list that contains the argument that will be printed
 *Return: amount of bytes printed
 */
int _char(va_list arg)
{
	char c = va_arg(arg, int);

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
	char *str;
	int i;

	str = va_arg(arg, char *);
	if (*str == '\0')
		return (0);

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
	return (_itoa(va_arg(arg, int), len));
}
/**
 * _strspe - String convert special chars to hexa
 * @arg: list that contains the argument that will be printed
 * Return: amount of bytes printed
 */
int _strspe(va_list arg)
{
	char *str, *wild = "\\x";
	int x;

	str = va_arg(arg, char *);

	for (; *str != '\0'; str++)
	{
		if (*str >= 32 && *str < 127)
			write(1, str, 1);
		else
		{
			x = *str;
			write(1, wild, 2);
			hexa(x);
		}
	}
	return (0);
}
