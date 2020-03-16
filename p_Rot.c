#include "holberton.h"

/**
*print_R - printRot13
*@n: number
*@s: array
*@indx: arrays's position
*Return: number of character
*/

int print_R(va_list n, char *s, int *indx)
{
	int i, j, ch;
	char *str = va_arg(n, char *);
	char ar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";



	if (str == NULL)
		str = "(null)";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == ar[j])
			{
				buffer(s, rot13[j], indx);
				ch++;
				break;
			}

		}

		if (!ar[j])
		{
			buffer(s, str[i], indx);
			ch++;
		}
		i++;
	}
	return (ch);
}
