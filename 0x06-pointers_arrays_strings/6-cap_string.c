#include "mainh."

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int sting = 0, i;
	int upp_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + sting) >= 97 && *(s + sting) <= 122)
		*(s + sting) = *(s + sting) - 32;
	sting++;
	while (*(s + sting) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + sting) == upp_words[i])
			{
				if ((*(s + (sting + 1)) >= 97) && (*(s + (sting + 1)) <= 122))
					*(s + (sting + 1)) = *(s + (sting + 1)) - 32;
				break;
			}
		}
		sting++;
	}
	return (s);
}
