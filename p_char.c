#include "holberton.h"

/**
*p_char - print character
*@n: va_list elemnts
*@s: buffer (Temporary storage area)
*@indx: position on buffer
*Return: characters's number
*/

int p_char(va_list n, char *s, int *indx)
{
	int a;

	a = va_arg(n, int);
	buffer(s, a, indx);

	return (1);
} 
