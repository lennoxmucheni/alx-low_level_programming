#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5){
	printf("Last digit of %d\n is $n and is greater than 5", n)
	}
	else if (n == 0){
	printf("Last digit of %d\n is $n and is 0")
	}
	else {
	printf("Last digit of %d\n is $n and is less than 6 and not 0")
	}
	return (0);
}
