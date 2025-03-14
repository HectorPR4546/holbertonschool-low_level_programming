#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
/**
 * struct dog - the name of the structure
 * @name: var
 * @age: var
 * @owner: var
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */
