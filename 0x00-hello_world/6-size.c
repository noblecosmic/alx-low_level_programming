#include <stdio.h>

/**
 * main - Entry point
 * 
 * return: Always 0 (Success)
 */
int main(void)
{
  printf("The sizeof a char is: %lu.\n", sizeof(char));
  printf("The sizeof an int is: %lu.\n", sizeof(int));
  printf("The sizeof a long init is: %lu.\n", sizeof(long int));
  printf("The sizeof a long long in t is: %lu.\n", sizeof(long long int));
  printf("The sizeof a float is: %lu.\n", sizeof(float));
}
