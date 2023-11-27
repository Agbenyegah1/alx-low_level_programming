#include "dog.h"
/*
 * Define a new type struct dog with the following members:
 *
 * name: A pointer to a character array that represents the name of the dog
 * age: A float that represents the age of the dog in years
 * owner: A pointer to a character array that represents the name of the dog's owner
 */
typedef struct dog {
    char *name; /* Dog's name */
    float age; /* Dog's age in years */
    char *owner; /* Dog's owner's name */
} dog_t;

/*
 * Initializes a struct dog with the specified name, age, and owner
 *
 * @param d: Pointer to the struct dog to initialize
 * @param name: Dog's name
 * @param age: Dog's age in years
 * @param owner: Dog's owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
    if (d) {
        (*d).name = name;
        (*d).age = age;
        (*d).owner = owner;
    }
}
