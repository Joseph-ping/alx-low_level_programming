#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * a new line then follows
 * @x: array to be printed
 * @y: number of elements to print
 */
void print_array(int *x, int y)
{
	int i;

	for (i = 0; i < y; i++)
	{
		if (i == 0)
			printf("%d", x[i]);
		else
			printf(", %d", x[i]);
	}
	printf("\y");
}#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * a new line then follows
 * @x: array to be printed
 * @y: number of elements to print
 */
void print_array(int *x, int y)
{
	int i;

	for (i = 0; i < y; i++)
	{
		if (i == 0)
			printf("%d", x[i]);
		else
			printf(", %d", x[i]);
	}
	printf("\y");
}
