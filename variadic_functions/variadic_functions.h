#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

typedef struct {
	char *op;
	void (*func)(va_list args);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(va_list args);
void print_a_integer(va_list args);
void print_a_float(va_list args);
void print_a_char_ptr(va_list args);

#endif
