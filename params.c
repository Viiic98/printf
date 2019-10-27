#include "holberton.h"

/**
 *_char - prints a char
 *@arg: list that contains the argument that will be printed
 *Return: nothing
 */
void _char(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
}

/**
 *_str - prints a string
 *@arg: list that contains the argument that will be printed
 *Return: nothing
 */
void _str(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);
	i = _strlen(str);

	write(1, str, i);
}

/**
 *_int - prints an int
 *@arg: list that contains the argument that will be printed
 *Return: nothing
 */
void _int(va_list arg)
{
	_itoa(va_arg(arg, int));
}
