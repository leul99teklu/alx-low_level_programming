#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int sting = 0, len = 0, mc = 0, jd = 1, x = 1, p;

	while (*(s + sting) != '\0')
	{
		if (len > 0 && (*(s + sting) < '0' || *(s + sting) > '9'))
			break;

		if (*(s + sting) == '-')
			jd *= -1;

		if ((*(s + sting) >= '0') && (*(s + sting) <= '9'))
		{
			if (len > 0)
				x *= 10;
			len++;
		}
		sting++;
	}

	for (p = sting - len; p < sting; p++)
	{
		mc = mc + ((*(s + i) - 48) * x);
		x /= 10;
	}
	return (mc * jd);
}
