#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it. plus a new line
 * @argc: amount of args
 * @argv: pointer to pointers array
 * return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
