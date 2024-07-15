#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void print_name(char *name, void (*f)(char *));

#endif
