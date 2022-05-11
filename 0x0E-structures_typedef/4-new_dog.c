#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - returns a new instance of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: d_ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_ptr;
	char *temp_name, *temp_owner;

	d_ptr = malloc(sizeof(dog_t));
	if (d_ptr == NULL)
		return (NULL);

	temp_name = _strdup(name);
	if (temp_name == NULL)
	{
		free(d_ptr);
		return (NULL);
	}
	d_ptr->name = temp_name;

	d_ptr->age = age;

	temp_owner = _strdup(owner);
	if (temp_owner == NULL)
	{
		free(d_ptr->name);
		free(d_ptr);
		return (NULL);
	}
	d_ptr->owner = temp_owner;

	return (d_ptr);
}

/**
 * _strdup - returns the duplicate of a string in memory
 * @str: string parameter
 *
 * Return: duplicate of @str
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;
	/* Obtaining the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		size++;

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[size] = '\0';
	return (ptr);
}
