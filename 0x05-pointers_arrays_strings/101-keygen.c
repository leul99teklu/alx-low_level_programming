#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int x = 0, p = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (p < 2772)
	{
		x = rand() % 128;
		if ((p + x) > 2772)
			break;
		p = p + x;
		printf("%c", x);
	}
	printf("%c\n", (2772 - p));
	return (0);
}
