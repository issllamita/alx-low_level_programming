#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  * new_dog - function that creates a new dog
  * @name: pointer to string
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer to the newly created dog_t structur,
  * othewise NULL if it fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_l = strlen(name);
	int owner_l = strlen(owner);
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = (char *)malloc((name_l + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->owner = (char *)malloc((owner_l + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
