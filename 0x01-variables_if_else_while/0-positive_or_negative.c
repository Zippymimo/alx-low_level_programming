#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if(n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
=======
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - assign a random number to a variable
 * Description: Printing a variable positive or negative
 * Return: 0
 *
 */
int main(void)
{
	int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
return (0);
>>>>>>> 06ff591c394985236150d95368372b5e6cd02c3c
}
