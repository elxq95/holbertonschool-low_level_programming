struct dog(
{
        char *name;
        float *age;
        char *owner;
};

struct dog *new_dog(char *name, float *age, char *owner)
{
struct dog *newdog;

dog = malloc(sizeof(struct dog));

if (dog == NULL)
{
return (NULL);

dog ->name = name;
dog ->age = age;
dog ->owner = owner;

return dog;
}
