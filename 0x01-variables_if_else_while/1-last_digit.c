##include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Prints the last digit of a randomly generated number
*       and evaluate whether it is greater than 5, equal to 0, and less than 6 and not 0.
* Return: Always 0.
*/
		int main(void)
		{
				int n,x;
				x = n%10;

				srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (x > 5)
				{
				printf("Last digit of %d is %d and is greater than 5\n", n, x);
				}
				else if (x == 0)
				{
				printf("Last digit of %d is %d and is 0\n", n, x);
				}
				else
			       	{                                 										                                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
				}                                                                      
		return (0);
}
