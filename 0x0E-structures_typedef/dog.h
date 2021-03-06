#ifndef _DOG_STRUCTURE_
#define _DOG_STRUCTURE_



/**
 * struct dog - dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 * Description: Creates a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *__strcopy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /*_DOG_STRUCTURE_*/
