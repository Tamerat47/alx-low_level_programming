#include "main.h"

/**
  * print_name - a function that Prints a name
  * @name: The name to prints
  * @f: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		if (f != NULL)
			f(name);
	}
}
