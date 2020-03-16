/**
*print_unis - print unsigned dec
*@n: va_list's elements 
*@s: bufr
*@indx: buffr 's position
*Return: number chars of elemt
*/
int print_unis(va_list n, char *s, int *indx)
{
	unsigned int un, j, counter, number, v1, v2, v3;
	int a, i;
	
	counter = 1;
	i = 0;
	a = (va_arg(n, int));

	un = a;
	v2 = un;
	number = v2;

	while (number > 9)
	{
		number /= 10;
		conter++;
		v3 *= 10;
	}
	for (j = 1; j <= conter; j++)
	{
		v1 = v2 / v3;
		v2 = v2 % v3;
		v3 /= 10;
		i++;
		buffer(s, ('0' + v1), indx);
	}
	return (i);
}
