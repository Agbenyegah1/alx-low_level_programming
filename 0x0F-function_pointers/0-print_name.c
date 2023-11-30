#include "function_pointer.h"
/**
 * print_name - Prints a name using a function pointer.
 * @name: Name of the person.
 * @f: Function pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *)) {
  // Check if the function pointer is valid and call it if so.
  f ? f(name) : ;
}
