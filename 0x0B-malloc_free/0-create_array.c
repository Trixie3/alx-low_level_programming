#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of array
* @c: character to put in the array
* Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *t = (char *) malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (t == NULL)
		return (NULL);

	for (; i < size; i++)
		t[i] = c;

		return (t);
}
