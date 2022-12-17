#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed (output).
*/

void print_number(int n)
{
	unsigned int num = n;

	/*check if it's negative*/
	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	/*then print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*Then print the last digit*/
	putchar((num % 10) + 48);
}
