#include "main.h"
/**
 * _printf - function that prints a variable number of arguments
 * @format: pointer to character
 * Return: an integer (the number of printed arguments)
 */
int _printf(const char *format, ...)
{
	int i, length;
	va_list args;
	int (*f)(va_list);

	i = 0;
	length = 0;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}

		else
		{
			if (format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == '%' || format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				f = get_func(&format[i + 1]);
				length += f(args);
			}
			else
			{
				_putchar('%');
			       	_putchar(format[i + 1]);
				length += 2;
			}
			i++;
		}

		i++;
	}
	va_end(args);
	return (length);
}
