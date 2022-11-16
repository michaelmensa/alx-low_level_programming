#ifndef DOG_H
#define DOG_H

/**
  * dog.h - struct my_dog contains
  * @name; dog's name
  * @age; dog's age
  * @owner: dog's owner
  *
  * Return: 0
  */

typedef struct dog /* user defined variable type */
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
