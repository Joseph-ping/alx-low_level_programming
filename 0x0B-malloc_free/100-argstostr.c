#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
  * @av: arguments
  * @ac: number of arguments

 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int l;
	int m;
	char *p = NULL;
	int k;
	int ext;

	k = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[i][m] != '\0'; m++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (j = 0; av[i][m] != '\0'; m++)
		{
			p[k] = av[l][m];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
