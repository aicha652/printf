#include "main.h"

/**
 * _printf - produce output according to a format
 * @format: character string
 * Return: size of str
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, sz = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				sz++;
			}
			if (format[i] == '%')
			{
				i++;
				if (format[i] == ' ' || format[i] == '\0')
					return (-1);
				else if (format[i] ==  '%')
				{
					_putchar('%');
					sz++;
				}
				else if (format[i] == 'c')
				{
					_putchar(va_arg(args, int));
					sz++;
				}
				else if (format[i] == 's')
				{
					sz = sz + print_str(va_arg(args, char *));
				}
				else if (format[i] == 'd' || format[i] == 'i')
				{
				}
			}
		}
	va_end(args);
	return (sz);
}
