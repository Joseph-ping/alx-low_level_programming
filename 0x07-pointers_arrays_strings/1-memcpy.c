#include "main.h"

/**
 * _memcpy - Copies @q bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: Copy @src into this pointer
 * @src: Copy characters from this source buffer.
 * @q: The number of bytes to copy from @src
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int q)
{
     char *source = src;
    char *destination = dest;
    unsigned int index;
	
	for (index = 0; index < q; index++)
		destination[index] = source[index];

	return (dest);
}
