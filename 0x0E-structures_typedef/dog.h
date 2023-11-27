#include "dog.h"
/**
 * Initializes a struct dog with the specified name, age, and owner
 *
 * @param d: Pointer to the struct dog to initialize
 * @param name: Dog's name
 * @param age: Dog's age in years
 * @param owner: Dog's owner's name
 *
 * Return: void
 */
void initialize_dog(struct dog *d, char *name, float age, char *owner) {
    // Verify if the pointer is valid
    if (d) {
        // Set the dog's name
        d->name = name;

        // Set the dog's age
        d->age = age;

        // Set the dog's owner
        d->owner = owner;
    }
}
