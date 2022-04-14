#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure with arguments for it's name, age, and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif