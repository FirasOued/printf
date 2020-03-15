#include "holberton.c"


/**
*p_str - print string
*@n: va_list elemnts
*@s: buffer (Temporary storage area)
*@indx: position on buffer
*Return: characters's number
*/

int print_s(va_list n, char *s, int *indx)
{
	char *a;
	int i = 0, j = 0;

	a = va_arg(n, char*);

	if (a == NULL)
		a = "(null)";

	while (a[i])
	{
		buffer(s, a[i], indx);
		i++;
		j++;
	}

	return (j);
}
