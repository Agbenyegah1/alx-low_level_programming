#include "dog.h"
/*
 * Define a new type of strut Dog with the following membets 
 * name : A pointer to character array that represents the dog's name
 * age : A float that represent the dogs age in years
 * owner : A pointer to a characted array that represents the owner's name
 * 
 */
typedef struct dog{
	char *name;
	float age;
	char *owner;
}dog_t;
/* @param d : Pointer to the struct dog to intialize 
 * @param name : Dog's name
 * @param age : Dog's age 
 * @param owner : Dog's  owner
 *
 * return void
 *
 */
void initialize_dog(dog_t *d,char *name,float age,char *owner){
	if (d){
		d-->name = name;
			d--> age= age; 
		d--> owner= owner;
	}
}
