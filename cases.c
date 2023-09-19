#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * cases - its cases
 * @i: its i
 * @format: its format
 */

void cases(int i, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	switch (format[i])
	{
	case 'd':
		_printf("%d", va_arg(args, int));
		break;
	case 'i':
		_printf("%i", va_arg(args, int));
		break;
	case 'f':
		_printf("%f", va_arg(args, double));
		break;
	case 'c':
		_printf("%c", va_arg(args, int));
		break;
	case 's':
		_printf("%s", va_arg(args, const char *));
		break;
	case '%':
		_printf("%%");
		break;
	default:
		_printf("Invalid format specifier");
		break;
	}
	va_end(args);
}
