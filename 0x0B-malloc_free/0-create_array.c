#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 *
 * @size: size of the array
 * @c: character
 * Return: NUll if size =0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
