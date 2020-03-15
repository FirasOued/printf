/**
*_printf - prints depends of the arguments.
*@format: c > char, s > string d > decimals, i > integers,
*Return: string (printed)
*/

int _printf(const char *format, ...)
{

	int ch, a, adress;
	int *indx;
	char *s;
	int (*fc)(va_list, char *s, int *k)

	ch = 0;
	adress = 0;
	a = -1;

	va_list elmts;
	va_start(elmts, format);
	s = malloc(1024);
	indx = &adress;

	if (s == NULL)
		return (-1);

	if (format)
	{
		a = 0;
		for (; format[ch] != '\0'; ch++, a++)
		{
			if (format[ch] != '%')
				buffer(s, format[ch], indx);

			else if (format[ch] == '%' && format[ch + 1] == '\0')
			{
				return (-1);
			}
			else if (format[ch] == '%' && format[ch + 1] != '\0')
			{
				fc = functoget(format[ch + 1]);

				if (fc)
				{
					a = (a + fc(elmts, s, indx)) - 1;
					ch++;
				}

				else
					buffer(s, format[ch], indx);

			}
		}
	}

	if (*indx != 1024)
		write(1, s, *indx);

	free(s);
	va_end(elmts);
	return (a);
}
