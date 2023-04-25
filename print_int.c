#include "main.h"
#include <string.h>
/**
 * print_int: function that prints integer
 * @n: int to be printed
 * Return: int
 */
int print_int(int n)
{
	int i = n, j = 0;

	if (n < 0)
	{
		j++;
		n = n * -1;
		i = n;
		_putchar('-');
	}

	i = i / 10;

	if (i != 0)
	{
		j++;
		print_int(i);
	}
	if (i == 0)
	{
		j++;
	}
	_putchar((unsigned int) n % 10 + '0');

	return (j);
}
