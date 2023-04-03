#include "main.h"

/**
 * _strspn - Captures the length of a prefix substring.
 * @b: The string to be searched.
 * @allow: The prefix to be measured.
 *
 * Return: The number of bytes in b which
 * consist only of bytes from allow
 */
unsigned int _strspn(char *b, char *allow)
{
	unsigned int bytes = 0;
	int index;

	while (*b)
	{
		for (index = 0; allow[index]; index++)
		{
			if (*b == allow[index])
			{
				bytes++;
				break;
			}
