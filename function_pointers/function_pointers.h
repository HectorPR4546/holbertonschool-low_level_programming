#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *arrayi, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
#endif /* _FUNCTION_POINTERS_H_ */
