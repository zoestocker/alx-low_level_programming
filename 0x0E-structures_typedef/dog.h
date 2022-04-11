#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type
 * @name: name of the dog as a string
 * @age: age of the dog as a float
 * @owner: owner of the dog as a string
 *
 * Description: a struct called dog that stores the name, age and name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
