#include "main.h"
/**
 * check_function - funtion choose.
 * @c: pointer type.
 * Return: 0.
 */
int (*check_function(char c))(va_list a)
{
	int j;
	strct print[] = {
		{"c", _printf_char},
		{"s", _printf_str},
		{"%", _printf_percent},
		{"d", _printf_digit},
		{"i", _printf_digit},
		{"r", _printf_reversed},
		{NULL, NULL}
	};
	for (j = 0; print[j].pr_str != '\0'; j++)
	{
		if (print[j].pr_str[0] == c)
			return (print[j].a);
	}
	return (NULL);
}

