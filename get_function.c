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
 * print_prcg - print %
 * @list_of_variables: variadic list
 * Return: number of character printed -> 1
 */
int print_prcg(va_list list_of_variables)
{
	(void)list_of_variables;
	_putchar('%');
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
	return (size);
}

/**
 * do_nothing - no action
 * @list_of_variables: variadic list
 * Return: -1
 */
int do_nothing(va_list list_of_variables)
{
	(void)list_of_variables;
	return (0);
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
		{'%', print_prcg},
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
		return (do_nothing);
	}
	return (NULL);
}
