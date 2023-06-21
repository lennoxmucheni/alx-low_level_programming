#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
