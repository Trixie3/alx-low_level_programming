#include "main.h"
#include <stdlib.h>


/**
* _strlen - gets the length of a string
* @s: string to count
* Return: int
*/

int _strlen(char *s)
{
	int l = 0;

	if (s == NULL)
		return (0);

	while (s[l] != '\0')
		l++;
	return (l);
#include "main.h"
#include <stdlib.h>

/**
* str_concat -  concatenates two strings.
* @s1: string parameter
* @s2: string paramter
* Return: char pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len_s1, len_s2, i = 0, j = 0;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	s3 = (char *) malloc(len_s1 + len_s2 + 1);

	if (s3 == NULL)
		return (NULL);

	for (; i < len_s1; i++)
		s3[i] = s1[i];
	for (; j < len_s2; i++, j++)
		s3[i] = s2[j];
	s3[len_s1 + len_s2] = '\0';

	return (s3);
}
