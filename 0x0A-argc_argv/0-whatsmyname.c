#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
argc--; /* added to pass checks */
printf("%s\n", argv[0]);
return (0);
}
