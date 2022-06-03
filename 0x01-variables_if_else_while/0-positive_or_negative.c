#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Prints a random number and evaluate whether
*        it is positive, negative, or zero.
*
* Return: Alway 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
