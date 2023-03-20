#include <stdio.h>

/**
 * main - prints in lower case
 * Description: "prints the alphabet in lowercase, and then in uppercase"
 * Return: 0
 */
int main(void)
{
	char e = 'a';
	char f = 'A';

	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
