#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int i;
	for (i = 0; format[i] != '\0'; i++)
	{ 
		_putchar(format[i]);
	}
}
