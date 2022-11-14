#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
/**
 *  * _strlen - computes the length of a string.
 *   * @str: the string to be evaluated.
 *    *
 *     * Return: True length of string.
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i + 1);
}

char *_strcopy(char *src, char *dest);
/**
 *  * _strcopy - copies the content of a string.
 *   * @src: source string.
 *    * @dest: destination string.
 *     *
 *      * Return: destination string.
 */

char *_strcopy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 *  * new_dog - creates a new dog.
 *   * @name: name of dog.
 *    * @age: age of dog.
 *     * @owner: owner of dog.
 *      * Return: ptr to destination of new dog info.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == 0 || owner == 0)
		return (0);

	ptr = malloc(sizeof(dog_t));

	if (ptr == 0)
		return (0);

	ptr->name = malloc(_strlen(name) * sizeof(char));

	if (ptr->name == 0)
	{
		free(ptr->name);
		free(ptr);
		return (0);
	}

	_strcopy(name, ptr->name);

	ptr->age = age;


	ptr->owner = malloc(_strlen(owner) * sizeof(char));

	if (ptr->owner == 0)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (0);
	}

	_strcopy(owner, ptr->owner);

	return (ptr);
}
