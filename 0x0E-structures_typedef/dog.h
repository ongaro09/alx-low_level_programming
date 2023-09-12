#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a type describing dog elements
 * @name:name of dog
 * @age: age of dog
 * @owner:owner of dog
 *
 */

struct dog
{
        char *name;
        float age;
        char *owner;

};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
