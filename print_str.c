#include "main.h"

/**
 * print_str - print string
 * @str: string to print
 * Return: int size
 */
int print_str(const char *str)
{
	int i;
	const char *s = "(null)";

	if (str == NULL)
		str = s;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
