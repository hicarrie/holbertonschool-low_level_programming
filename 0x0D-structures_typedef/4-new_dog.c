#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void; NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *cname;
	char *cowner;
	int len_name = 0;
	int len_owner = 0;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	if (name != NULL)
	{
		cname = malloc(sizeof(char) * (len_name + 1));
		if (cname == NULL)
		{
			free(dog);
			return (NULL);
		}
	}

	if (owner != NULL)
	{
		cowner = malloc(sizeof(char) * (len_owner + 1));
		if (cowner == NULL)
		{
			free(name);
			free(dog);
			return (NULL);
		}
	}

	_strcpy(cname, name);
	_strcpy(cowner, owner);

	dog->cname = name;
	dog->age = age;
	dog->cowner = owner;

	return (dog);
}

/**
 * *_strcpy - copies string pointed to by src to the buffer pointed to dest
 * @dest: string destination
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
