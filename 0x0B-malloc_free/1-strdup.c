#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to newly allocated space in memory
* @str: char pointer
* Return: char pointer
*/

char *_strdup(char *str)
{
	char *t;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	t = (char *) malloc(len + 1);
	if (t == NULL)
		return (NULL);

	for (; i < len; i++)
		t[i] = str[i];
	t[len] = '\0';
	return (t);
}
