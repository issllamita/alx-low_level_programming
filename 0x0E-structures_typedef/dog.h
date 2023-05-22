#ifndef DOG_H
#define DOG_H
/**
  * struct dog - our own type that stor different type of data
  * @name: name of dog
  * @age: age of dog
  * @owner: owner name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
