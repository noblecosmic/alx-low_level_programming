#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
  printf("Size of a char is=%i bytes\n", sizeof(char));
  printf("Size of an int is=%i bytes\n", sizeof(int));
  printf("Size of a long int is=%i bytes\n", sizeof(long int));
  printf("Size of a long long int is=%i bytes\n", sizeof(long long int));
  printf("Size of a float is=%i bytes\n", sizeof(float));
}
