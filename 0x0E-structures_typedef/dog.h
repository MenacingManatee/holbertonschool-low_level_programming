#ifndef DOG_H
#define DOG_H
int _putchar (char c);

/**
 * struct dog - info on name age and owner of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
