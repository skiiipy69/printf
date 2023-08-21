#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct printf_struct - structure
 * @pr_str: pointer.
 * @a: variable.
 *
 * Description: array.
 */

typedef struct printf_struct
{
	char *pr_str;
	int (*a)(va_list x);
} strct;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list list);
int _printf_str(va_list list);
int _printf_percent(va_list list);
int _printf_digit(va_list list);
int _printf_reversed(va_list list);
int _int_to_str(int arg);
int (*check_function(char c))(va_list a);
#endif

