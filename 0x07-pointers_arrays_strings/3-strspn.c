#include "main.h"

/**
 * _strspn - Records the length of a prefix substring.
 * @s: The searched string .
 * @accept: The prefix under measure.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
