#include <stdarg.h>
#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list obj);
void print_int(char *separator, va_list obj);
void print_float(char *separator, va_list obj);
void print_string(char *separator, va_list obj);
/**
*/

typedef struct format_specifier
{
	char *cc;
	void (*f)(char *separator, va_list obj);
} p_type;

#endif
