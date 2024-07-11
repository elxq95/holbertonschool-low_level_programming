#ifndef MY_HEADER
#define MY_HEADER

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
