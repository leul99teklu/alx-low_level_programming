#include "main.h"

/**
*rev_string - reverse a string.
*@s: input string.
*Return: no return.
*/
void rev_string(char *s)
{
	int sting = 0, i, j;
	char *leu, tek;

	while (sting >= 0)
	{
		if (s[sting] == '\0')
			break;
		sting++;
	}
	leu = s;

	for (i = 0; i < (sting - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tek = *(leu + j);
			*(leu + j) = *(leu + (j - 1));
			*(leu + (j - 1)) = tek;
		}
	}
}
