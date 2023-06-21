#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alp[26] = ('a', 'b', 'c', ...,'y', 'z');

	int i;
	for (i=0; i < sizeof(alp)/sizeof(alp[0]); i++).
	{
		putchar(alp[i]);
	}
	_putchar('\n');
	return (0);
}