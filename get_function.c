#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - print character
 * @list_of_variables: variadic list
 * Return: number of character printed -> 1
 */
int print_char(va_list list_of_variables)
{
	_putchar(va_arg(list_of_variables, int));
	return (1);
}

/**
 * print_str - print string
 * @list_of_variables: variadic list
 * Return: number of character printed
 */
int print_str(va_list list_of_variables)
{
	int size = 0;
	char *str = va_arg(list_of_variables, char*);

	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
	return (size - 1);
}

/**
 * get_printFunc - wrapper function to choose the matching function
 * @character: the given specifier
 * Return: matching function
 */
int (*get_printFunc(const char *character))(va_list)
{
	int i = 0;
	TYPES t[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};


	if (*character == '%')
	{
		while (t[i].character)
		{
			if (t[i].character == character[1])
				return (t[i].get_type);
			i++;
		}

	}
	return (NULL);
}
