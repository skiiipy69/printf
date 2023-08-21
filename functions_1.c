#include "main.h"
/**
 * _printf_digit - funtion that prints a digit.
 *
 * @list: arguments.
 *
 * Return: 0.
 */
int _printf_digit(va_list list)
{
	int arg = va_arg(list, int);
	int i;

	i = int_to_str(arg);
	return (i);
}

/**
 * _int_to_str - recursive function
 *
 * @arg: is an integer
 *
 * Return: index
 */
int _int_to_str(int arg)
{
	int i;
	unsigned int number;

	i = 0;
	number = arg;
	if (arg < 0)
	{
		i += _putchar('-');
		number = -number;
	}
	if (number == 0)
	{
		i += _putchar('0');
		return (i);
	}

	if (number / 10)
		i += int_to_str(number /  10);

	i += _putchar(number % 10 + '0');
	return (i);
}

