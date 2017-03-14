#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data struct for dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
