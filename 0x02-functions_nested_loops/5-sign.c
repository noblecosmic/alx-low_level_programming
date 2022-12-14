#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: n is a number that will be printed
 * Return: return 1 print '+' if n > 0, if 0 print '0' if n = 0, else -1 print'_' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
