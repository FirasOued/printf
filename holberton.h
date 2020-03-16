#ifndef __HOLBERTON__
#define __HOLBERTON__

#include <stdarg.h>

/*---------------------------STRUCTS---------------------------*/

/**
 * struct TYPES - Vtype containing specifier & its matching display function
 * @character: specifier
 * @get_type: display function
 */
typedef struct TYPES
{
	char character;
	int (*get_type)(va_list);
} TYPES;
/*--------------------------PROTOTYPES--------------------------*/
int _printf(const char *format, ...);
int (*get_printFunc(const char *character))(va_list);
int print_str(va_list list_of_variables);
int print_char(va_list list_of_variables);
int print_prcg(va_list list_of_variables);
int do_nothing(va_list list_of_variables);
int _putchar(char c);
#endif
