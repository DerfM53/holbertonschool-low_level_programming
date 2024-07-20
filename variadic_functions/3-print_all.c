#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_a_char(va_list args) {
	char c = va_arg(args, int);
	printf("%c", c);
}

void print_a_integer(va_list args) {
	int i = va_arg(args, int);
	printf("%d", i);
}

void print_a_float(va_list args) {
	double f = va_arg(args, double);
	printf("%f", f);
}

void print_a_char_ptr(va_list args) {
	char *s = va_arg(args, char*);
	if (s == NULL) {
		printf("(nil)");
	} else {
		printf("%s", s);
	}
}

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_a_char},
		{"i", print_a_integer},
		{"f", print_a_float},
		{"s", print_a_char_ptr},
		{NULL, NULL}
	};

	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (format[i] == *(ops[j].op))
			{
				printf("%s", separator);
				ops[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
}
va_end(args);
printf("\n");
}
