#include "main.h"
#include <string.h>
/**
 * print_int: function that prints integer
 * @n: int to be printed
 * @j: int size
 * Return: int
 */
int print_int(int n, int j )
{
	int i = n;
	if (n < 0)
	{
		n = n * -1;
		i = n;
		_putchar('-');
		j++;
	}

	i = i / 10;

	if (i != 0)
	{
		j = j + print_int(i, j);
	}
	if (i == 0)
	{
		j++;
	}

	_putchar((unsigned int) n % 10 + '0');
	return (j);
}
