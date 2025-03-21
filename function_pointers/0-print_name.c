#include "function_pointers.h"
#include "main.h"
/**
 * print_name - function print
 * @name: name pointer
 * @f: pointer to call
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
