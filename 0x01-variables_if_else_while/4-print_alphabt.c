#include <stdio.h>
/**
 * main - printing alphabets in lowercase
 * Description: program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
