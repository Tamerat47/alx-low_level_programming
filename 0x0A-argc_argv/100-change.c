#include <stdio.h>
#include <stdlib.h>
/**
 * main - print changes for the amount of money
 * @argc: number of argument
 * @argv: pointer to the argument
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int cents, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (cents = atoi(argv[1]); cents > 0;)
	{
		money++;
		if (cents >= 25)
		{
			cents -= 25;
			continue;
		}
		if (cents >= 10)
		{
			cents -= 10;
			continue;
		}
		if (cents >= 5)
		{
			cents -= 5;
			continue;
		}
		if (cents >= 2)
		{
			cents -= 2;
			continue;
		}
		if (cents >= 1)
		{
			cents -= 1;
			continue;
		}
		cents--;
	}
	printf("%d\n", money);
	return (0);
}
