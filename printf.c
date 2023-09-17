#include <stdio.h>
#include <stdarg.h>
#include "main.h"
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
		    switch (format[i])
		    {
			    case 'c':
				    printf("%c", va_arg(args, int));
				    break;
			    case 's':
				    printf("%s", va_arg(args, char*));
				    break;
			    case '%':
				    printf("%%");
				    break;
			    default:
				    printf("Invalid format specifier");
				    break;
		    }
	    }
	    else
	    {
		    putchar(format[i]);
	    }
    }
    va_end(args);
    return (i);
}
