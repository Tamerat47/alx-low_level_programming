#include "stdio.h"
/**
 * main - a funciton that print its name
 * @argc: number of arguments
 * @argv: a pointer to the arguments
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
