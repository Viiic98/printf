#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct format - structure for printf format
 * @f: format char
 * @p: function for format
 */
typedef struct format
{
	char f;
	void (*p)(va_list);
	void (*pl)(va_list, int);
} form;
/* main function */
int _printf(const char *format, ...);

/* side functions */
int _strlen(char *s);
int _putchar(char c);
void _itoa(int, int);
void _revstr(char *);
int _pow(int, int);
int _isnumber(int, int);
int _compare(char, int, va_list);
void hexa(int x);

/* parameter functions */
void _char(va_list);
void _str(va_list, int);
void _int(va_list, int);
void _binary(va_list);
void _strspe(va_list);
#endif
