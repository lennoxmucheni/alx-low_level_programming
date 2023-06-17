#include <stdio.h>
/**
* main - Entry point
* Description: 'Print all possible combinations of two two digit nos'
* Return: Always 0 (Success)
*/
int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 0; firstNumber <= 99; firstNumber++)
	{
		for (secondNumber = firstNumber; secondNumber <= 99; secondNumber++)
		{
            putchar((firstNumber / 10) + '0');
            putchar((firstNumber % 10) + '0');
            putchar(' ');
            putchar((secondNumber / 10) + '0');
            putchar((secondNumber % 10) + '0');

            if (firstNumber != 99 || secondNumber != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}
