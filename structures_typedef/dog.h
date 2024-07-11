#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is structure
 * about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The ownder of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that
 * initialize a variable of type
 * @struct dog d - dog
 * @name - pointer to a string
 * @age - age of dog
 * @owner - pointer to a string
 */

struct dog
{
        char *name;
        float age;
        char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
