#ifndef HOLBERTON_H
#define HOLBERTON_H




/**
*struct a - give the format
*@c: character that will give us the function to use
*@p: funct pointr with va_list argument
 */

typedef struct n
{
	char c;
	int (*p)(va_list list, char *s, int *indx);

} get;
int _printf(constrt char *format, ...);

void buffer(char *s, char a, int *indx);

int p_char(va_listrt n, char *s, int *indx);
int p_str(va_listrt n, char *s, int *indx);
int p_prctg(va_listrt n, char *s, int *indx);
int p_d(va_listrt n, char *s, int *indx);


