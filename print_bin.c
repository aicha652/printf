#include "main.h"

/**
 * print_bin - print binary num
 * @n: unsigned int arg
 * Return: size
 */
int print_bin(unsigned int n)
{
	unsigned int b = 0, cont, p = 1;
	int sz = 0;

	while (n != 0)
	{
		cont = n % 2;
		b = b + cont * p;
		p = p * 10;
		n = n / 2;
	}
	sz = print_int(b);
	return (sz);
}
