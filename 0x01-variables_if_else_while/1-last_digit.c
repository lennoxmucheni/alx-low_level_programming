#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Entry point
* Description: 'Print last digit of variable'
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastN = n % 10;
	if (n > 5){
	printf("Last digit of %d is %d and is greater than 5\n", n, lastN)
	}
	else if (n == 0){
	printf("Last digit of %d is %d and is 0\n", n, lastN)
	}
	else {
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN)
	}
	return (0);
}