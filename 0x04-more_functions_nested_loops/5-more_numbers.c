#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 (x10).
 *
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
			putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
