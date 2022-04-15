#include <stdio.h>

/**
*main - print numbers from 0 - 100.
*Fuzz for multiples of 3
*Buzz for multiples of 5
*FuzzBuzz for multiples of bothe 3 and 5.
*Return: 0 (SUECSS)
*/
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FuzzBuzz");
		else if (i % 3 == 0)
			printf(" Fuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}

