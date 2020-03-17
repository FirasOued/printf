#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_binary - print integer in binary mode
 * @list_of_variables: variadic list
 * Return: number of characters printed
 */
int print_binary(va_list list_of_variables)
{
	unsigned int size = 0, number = 0, tmp = 0, i = 1;
	char *binNumber;

	number = va_arg(list_of_variables, unsigned int);

	tmp = number;

	if (!number)
	{
		_putchar('0');
		return (0);
	}

	while (tmp)
	{
		tmp /= 2;
		size++;
	}

	binNumber = malloc((size * sizeof(char)) + 1);
	if (!binNumber)
		return (0);

	while (number)
	{
		binNumber[size - i] = (number % 2) + '0';
		number /= 2;
		i++;
	}
	binNumber[i] = '\0';

	for (i = 0 ; i < size ; i++)
		_putchar(binNumber[i]);

	free(binNumber);

	return (size);

}
