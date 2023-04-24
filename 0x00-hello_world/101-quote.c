#include "stdio.h"
/**
  *main - Entry point
  *
  *
  * A program using a pointer
  *
  *Return: Always 1 (standard error)
  *
  */
int main(void)
{
	char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", a);


	return (1);
}
