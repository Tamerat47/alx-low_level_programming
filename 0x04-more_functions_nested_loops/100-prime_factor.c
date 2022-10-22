#include <stdio.h>
#include <math.h>
/**
  * main - Prints largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i, lf;
	long a = 612852475143;

	for (i = 1; i <= (sqrt(a)); i++)
	{
		if (a % i == 0)
		{
			lf = a / i;
		}
	}

	printf("%ld\n", lf);

	return (0);
}
