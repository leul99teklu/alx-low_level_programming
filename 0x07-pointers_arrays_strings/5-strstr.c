#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *lhaystack;
	char *tneedle;

	while (*haystack != '\0')
	{
		lhaystack = haystack;
		tneedle = needle;

		while (*haystack != '\0' && *tneedle != '\0' && *haystack == *tneedle)
		{
			haystack++;
			tneedle++;
		}
		if (!*tneedle)
			return (lhaystack);
		haystack = lhaystack + 1;
	}
	return (0);
}
