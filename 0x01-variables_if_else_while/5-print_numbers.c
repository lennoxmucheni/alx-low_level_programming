#include <sdtdio.h>
/**
* main - Entry point
* Description: 'Display single digit nos of base 10'
* Return: Always 0 (Success)
*/
int main(void)
{
	int number;

	for (number = '0'; number < 10; number++)
	{
		printf('%d', number);
	}
	printf('\n');
	return(0);
}