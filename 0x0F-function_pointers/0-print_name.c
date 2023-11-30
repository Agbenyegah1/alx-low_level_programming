#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer.
 * @name: Name of the person.
 * @f: Function pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *)) {
  // Check if the function pointer is valid.
  if (f) {
    // Call the function pointed to by f.
    f(name);
  }
}
