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


/* Function Declarations */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
