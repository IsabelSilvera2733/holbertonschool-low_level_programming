#ifndef function_pointers
#define function_pointers

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
