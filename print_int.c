#include "main.h"
/**
 * print_int: function that prints integer
 * @n: int to be printed
 * Return: int
 */
int print_int(int n)
{
	int i = n;

	if (n < 0)
	{
		n = n * -1;
		i = n;
		_putchar('-');
	}

	i = i / 10;

	if (i != 0)
	{
		print_int(i);
	}
	_putchar((unsigned int) n % 10 + '0');
	return (0);
}
