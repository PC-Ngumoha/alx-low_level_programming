#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog data type
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner's name
 *
 * Description: Data type that can be used to represent a dog
 * in out code.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef of struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: alias for type struct dog
 */
typedef struct dog dog_t;

/* Function Declarations */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
