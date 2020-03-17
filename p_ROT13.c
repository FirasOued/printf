#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
*print_R - printRot13
*@n: number
*Return: number of character
*/

int print_R(va_list n)
{
	int i, j, size = 0, state = 0;
	char *str = va_arg(n, char *);
	char ar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";



	if (str == NULL)
		str = "(null)";

	i = 0;
	while (str[i] != '\0')
	{
		state = 0;
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == ar[j])
			{
				_putchar(rot13[j]);
				state = 1;
				break;
			}
		}
		if (!state)
			_putchar(str[i]);

		size++, i++;
	}
	return (size);
}
