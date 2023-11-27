#include "dog.h"
/*
 * Define a new type struct dog with the following members:
 *
 * name: A pointer to a character array that represents the name of the dog
 * age: A float that represents the age of the dog in years
 * owner: A pointer to a character array that represents the name of the owner of the dog
 */
typedef struct dog {
    char *name; /* Dog's name */
    float age; /* Dog's age in years */
    char *owner; /* Dog's owner's name */
} dog_t;
