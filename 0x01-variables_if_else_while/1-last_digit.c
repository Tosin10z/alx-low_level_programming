#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
printf("Last digit of %d is %d", n, x);
if (x > 5)
	printf("%d and is greater than 5\n");
else if (x == 0)
	printf("and is 0\n");
else if (x < 6 && x != 0)
	printf("less than 6 and not 0\n");
return (0);
}
