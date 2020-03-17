#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * p_REV - print string in reverse mode
 * @n: variadic list
 * Return: number of character printed
 */
int p_REV(va_list n)
{
	char *str = va_arg(n, char*);
	int i = 0, length = 0;

	if (!str)
	{
		write(1, "(null)", 1);
		return (6);
	}

	length = _strlen(str);

	while (str[i])
	{
		_putchar(str[length - i - 1]);
		i++;
	}

	return (i);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
