#include "main.h"

/**
 * _strpbrk - Searches a string for any  set of bytes.
 * @q: The string to be searched.
 * @accept: The set of butes to be searched for.
 *
 * Return: If a set is matched - a pointer to be matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *q, char *accept)
{
	int index;

	while (*q)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*q == accept[index])
				return (q);
		}

		q++;
	}
