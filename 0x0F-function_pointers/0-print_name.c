#include "stdlib.h"
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: function pointer.
 *
 * Return: void.
 */
void printf_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}