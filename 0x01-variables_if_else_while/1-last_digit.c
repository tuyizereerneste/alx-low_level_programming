#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - the main function
 *
 * Return: success return 0
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is 0", n, r);
	else if (r < 6 && r != 0)
		printf("Last digit of %d is %d and is less than 6 and is not 0", n, r);
	printf("\n");

	return (0);
}
