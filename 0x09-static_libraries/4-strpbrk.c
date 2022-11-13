#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for lowercase character
 * @c: parameter is hard-coded in main function
 * Return: 0 or 1
 */
char *_strpbrk(char *is, char *accept)
{
	int size = 0;
	char *ptr = s;
	char *tmp = accept;
	int i;

	while (*accept++)
		size++;
	accept = tmp;

	while (*s)
	{
		accept = tmp;
		i = 0 ;
		while (accept < tmp + size)
		{
			if (*s == *accept)
				ptr = s, i++;
			accept++;

		}
		if (i == 1)
			return (ptr);
		s++;
	}
	return (NULL);
}
