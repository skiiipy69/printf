#include "main.h"
/**
 * _printf_char - funtion that print char.
 * @list: arguments.
 * Return: 0.
 */
int _printf_char(va_list list)
{
	int arg = va_arg(list, int);

	_putchar(arg);
	return (1);
}
/**
 * _printf_str - funtion that print str.
 * @list: arguments.
 * Return: 0.
 */
int _printf_str(va_list list)
{
	int i;
	char *point = va_arg(list, char *);
	char *pointNULL = "(null)";

	if (point == NULL)
		for (i = 0; pointNULL[i] != '\0'; i++)
			_putchar(pointNULL[i]);
	else
		for (i = 0; point[i] != '\0'; i++)
			_putchar(point[i]);

	return (i);
}
/**
 * _printf_percent - function that prints %
 * @list: arguments.
 * Return: 0.
 */
int _printf_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

