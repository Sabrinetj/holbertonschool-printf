#include "main.h"
/**
 * get_func: cheks for a valid format specifier
 * @format: pointer to character
 * Return: pointer function or NULL
 */
int (*get_func(const char *format))(va_list)
{
	print_d tab_s[] = {
		{"i", print_dec},
		{"d", print_dec},
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (tab_s[i].x != NULL)
	{
		if (format[0] == tab_s[i].x[0])
		{
			return (tab_s[i].f);
		}
	i++;
	}
	return (NULL);
}
