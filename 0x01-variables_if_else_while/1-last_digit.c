#include <stdlib.h>
#include <time.h>
/* main - Entry */

/* Return: Always 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	else if (n < 6 && ldigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	*/
	return (0);
}
