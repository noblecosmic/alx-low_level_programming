#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: c is a single letter
 * Return: return 1 if int c is lowercase, return 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
