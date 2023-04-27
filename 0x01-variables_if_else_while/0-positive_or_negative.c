#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main- Entry point
  *
  *prints positive and negative numbers
  *
  *Return: Always 0 (sucess)
  */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n < 0)
{
	printf("%d is nagative\n", n);
}
	if (n == 0)
{
	printf("%d is zero\n", n);
}
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	return (0);
}
