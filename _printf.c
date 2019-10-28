#include "holberton.h"

/**
 *_printf - prints formatted
 *@format: the format with which the function will print
 *Return: length of string printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, flag = 0, len = 0;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] - 48 >= 0 && format[i] - 48 <= 9)
			{
				len = _isnumber(len, (format[i] - 48));
				i++;
			}
			flag = _compare(format[i], len, arg);
			if (flag == 0)
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	}
	va_end(arg);
	return (i);
}
/**
 * _isnumber - length input
 * @len: actual value of length
 * @x: value of will be added
 * Return: length added
 */
int _isnumber(int len, int x)
{
	len *= 10;
	len += x;
	return (len);
}
/**
 * _compare - compare parameters with format
 * @format: actual value of format
 * @len: number of values that must be printed
 * @arg: list of arguments
 * Return: 0 if dont found any parameter
 */
int _compare(char format, int len, va_list arg)
{
	int j, flag = 0;
	form params[] = {
		{'c', _char, NULL},
		{'s', NULL, _str},
		{'d', NULL, _int},
		{'i', NULL, _int},
		{'b', _binary, NULL},
		{'\0', NULL, NULL},
	};

	for (j = 0; params[j].f != '\0'; j++)
	{
		if (params[j].f == format)
		{
			if (params[j].f == ('c' || 'b'))
				params[j].p(arg);
			else
				params[j].pl(arg, len);
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	return (flag);
}
