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

void cases(int i, const char *format, va_list args)
{
	switch (format[i])
	{
	case 'd':
		printf("%d", va_arg(args, int));
		break;
	case 'i':
		printf("%i", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 's':
		printf("%s", va_arg(args, const char *));
		break;
	case '%':
		printf("%%");
		break;
	default:
		printf("Invalid format specifier");
		break;
	}
	va_end(args);
}
