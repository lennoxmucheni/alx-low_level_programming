#include <stdio.h>
/**
* main - Entry point
* Description: 'Display positive & negative nos.'
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}	
	}
	putchar('\n');
	return (0);
}
