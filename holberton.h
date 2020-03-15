#ifndef HOLBERTON_H
#define HOLBERTON_H



int _printf(constrt char *format, ...);

void buffer(char *s, char a, int *indx);

int p_char(va_listrt n, char *s, int *indx);
int p_str(va_listrt n, char *s, int *indx);
int p_prctg(va_listrt n, char *s, int *indx);
int p_d(va_listrt n, char *s, int *indx);
int p_binr(va_listrt n, char *s, int *indx);