#include "holberton.h"

/**
 *_printf - prints formatted
 *@format: the format with which the function will print
 *Return: length of string printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, j;
	form params[] = {
		{'c', _char},
		{'s', _str},
		{'d', _int},
		{'i', _int},
		{'b', _binary},
		{'\0', NULL},
	};

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; params[j].f != '\0'; j++)
			{
				if (params[j].f == format[i])
				{
					params[j].p(arg);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(arg);
	return (i);
}
