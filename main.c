#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, l;
    int len2;

    _printf("%b\n", 98);
   l = _printf("hhhhh %d :\n", 345468);
  len =  _printf("Negative:[%d]\n", -762534);
  len2 = printf("Negative:[%d]\n", -762534);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf( "hhh %d\n:  ", l);
    printf("ggg %d\n:  ", l);
    return (0);
}
