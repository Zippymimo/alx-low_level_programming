#include <stdio.h>

/**
 * main - print the lowercase alphabet
 * Description: Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
