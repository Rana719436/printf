#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (*format == '%)
		{
			format++
			switch (*format)
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 's':
					printf("%s", va_arg(args, *char));
				default:
				       printf("you are stupid")
				       break;	       
			}
		else
		{
			_putchar(format[i]);
		}
		}
	}
	va_end(args);
	return (i);
}
