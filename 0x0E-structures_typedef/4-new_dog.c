#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *_strlen - function to return length of string
 *@s: string
 *
 *Return: length.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != 0)
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating nukk byte(\0) to buffer pointed to by dest
 * @src: parameter
 * @dest: parameter
 *
 * Return: *dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(sizeof(char) * (i + 1));

	if (new->name == NULL)
	{
	free(new);
	return (NULL);
	}

	new->owner = malloc(sizeof(char) * (j + 1));

	if (new->owner == NULL)
	{
		free(new);
		free(new->owner);
		return (NULL);
	}
	new->age = age;
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	return (new);
}
