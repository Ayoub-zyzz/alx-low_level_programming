#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	/* Check if the given character is within the lowercase ASCII range */
	if (c >= 'a' && c <= 'z')
	{
		/* If so, return 1 to indicate that the character is lowercase */
		return (1);
	}
	else
	{
		/* Otherwise, return 0 to indicate that the character is not lowercase */
		return (0);
	}
}
