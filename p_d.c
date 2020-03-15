#include "holberton.c"

/**
*p_d - print integers (base 10)
*@n: va_list elemnts
*@s: buffer (Temporary storage area)
*@indx: buffer's position 
*Return: number 
*/

int p_d(va_listrt n, char *s, int *indx);
{
	
	unsigned int i, number, count, v1, v2, v3;
	int a, z;

	z = 0;
	count = 1;
	v3 = 1;

	a = va_arg(n, int);
	v2 = a;

	if (a < 0) 
	{
		buffer(s, '-', indx);
		v2 = a * (-1);
		z++;
	}
	number = v2;

	while (number > 9) 
	{

		number = number / 10;
		count++;
		v3 *= 10;
	}

	for (i = 1; i <= count; i++)
	{
		v1 = v2 / v3;
		v2 = v2 % v3;
		v3 /= 10;
		z++;
		buffer(s, (var1 + '0'), indx);
	}
	return (z);
}
