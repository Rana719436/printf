#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - function that produces output according to a format.
 * @format: Fixed argument
 * Return: i
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			cases(i,format);
			fflush(stdout);
		}
		else
		{
			_putchar(format[i]);
			fflush(stdout);
		}
	}
	va_end(args);
	return (i);
}
