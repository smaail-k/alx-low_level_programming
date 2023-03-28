#include <stdio.h>
#include "main.h"

(void)reset_to_98(int *n, int *n2)
{
	int tmp = *n;
	*n = *n2;
	*n2 = tmp;
}
/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
int n;
int n2 = 988;
	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n, &n2);
	printf("n=%d\n", n);
return (0);
}
