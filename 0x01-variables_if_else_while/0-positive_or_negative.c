#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Description:Tell if random number is positive or negative or zero
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		pintf("%d is positive\n", n);
	else if (n == 0)
		pintf("%d is negative\n", n);
	else
		pintf("%d is zero\n", n);
	return (0);
}
