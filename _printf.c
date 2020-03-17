#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"


/**
 * _printf - produce an output according to format
 * @format: character string indicating the display mod
 * Return: number of character printed excluding '\0'
 */
int _printf(const char *format, ...)
{
	va_list list_of_variables;
	int (*print_function)(va_list);
	int size = 0, i = 0;

	if (!format)
		return (-1);

	va_start(list_of_variables, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		print_function = get_printFunc(&format[i]);

		if (!print_function)
		{
			_putchar(format[i]);
			i++, size++;
		}
		else
		{
			size += print_function(list_of_variables);
			i += 2;
		}
	}
	return (size);
}
