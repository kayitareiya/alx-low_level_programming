#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allcoated space that contains a string given as parameter
 *
 * @str: string
 *
 * Return: NULL if str = null.
 */

char *_strdup(char *str)
{
	char *i;
	int j = 0;
	int temp = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	i = malloc(sizeof(char) * (j + 1));

	if (i == NULL)
		return (NULL);
	for (temp = 0; str[temp]; temp++)
		i[temp] = str[temp];
	return (i);
}

