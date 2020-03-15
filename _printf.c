#include "holberton.h"

/**
*buffer - def local buffer of 1024 characters
*@s: buffer
*@x: character to printed
*@index: buffer's position
*Return: func
*/

void buffer(char *s, char a, int *indx)
{
	s[*indx] = a;
	*indx++;
	if (*indx == 1024)
	{
		write(1, s, *indx);
		*indx = 0;
	}
}

/**
*functoget - gets the function
*@c: character to find
*Return: funct
 */

int (*functoget(char c))(va_list n, char *s, int *indx)
{
	int ch;
	 get flist[] = {

		{'c', p_char}, {'s', p_str}, {'%', p_prctg}, {'i', p_d},

		{'d', p_d}, {'\0', NULL}
	};

	for (ch = 0; flist[ch].c != '\0'; ch++)
	{
		if (c == flist[ch].c)
		{
			return (flist[ch].p);
		}
	}
	return (NULL);
	

}

