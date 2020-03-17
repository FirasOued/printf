#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
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

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
	return (size);
}

int print_decimal(va_list list_of_variables)
{
	int number = va_arg(list_of_variables, int);
	int div = 1, mod = 0, size = 0;
	char digit = 0;

	if (number < 0)
		_putchar('-'), number*= -1, size++;

	while (number / div >= 10)
		div *= 10;

	mod = div * 10;

	while (div)
	{
		digit = (number % mod) / div;
		_putchar(digit + '0');
		mod /= 10, div /= 10;
		size++;
	}
	return (size);
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
		{'d', print_decimal},
		{'i', print_decimal},
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
