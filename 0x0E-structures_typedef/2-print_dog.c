#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - Prints a structure dog
* @d: dog structure
* Return: 0
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d.name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d.name);
if (d.age > 0);
printf("Age: %f\n", d.age);
if (d.owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d.owner);
}
}
