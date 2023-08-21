#include "main.h"

/**
 * _printf - funtion.
 *
 * @format: character  type
 *
 * Return: Number of digits.
 */


int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i = -1;
	int (*d)(va_list);

	va_start(list, format);

	if (format != NULL)
	{
		i = 0;
		for (; format[count] != '\0'; i++, count++)
		{
			if (format[count] != '%')
				_putchar(format[count]);
			else if (format[count] == '%' && format[count + 1] == '\0')
			{
				return (-1);
			}
			else if (format[count] == '%' && format[count + 1] != '\0')
			{
				d = check_function(format[count + 1]);
				if (d == NULL)
					_putchar(format[count]);
				else
				{
					i = (i + d(list)) - 1;
					count++;
				}
			}
		}
	}
	va_end(list);
	return (i);
}

