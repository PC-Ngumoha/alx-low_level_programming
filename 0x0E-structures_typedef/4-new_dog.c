#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);
int get_length(char *str);

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

	d_ptr = malloc(sizeof(dog_t));
	if (d_ptr == NULL)
		return (NULL);

	if (name == NULL)
		d_ptr->name = "nil";
	else
		d_ptr->name = _strdup(name);

	d_ptr->age = age;

	if (owner == NULL)
		d_ptr->owner = "nil";
	else
		d_ptr->owner = _strdup(owner);

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

	size = get_length(str);
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';
	return (ptr);
}

/**
 * get_length - gets the length of a string
 * @str: string parameter
 *
 * Return: length of @str
 */
int get_length(char *str)
{
	int i, length;

	if (str == NULL)
		return (0);
	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
