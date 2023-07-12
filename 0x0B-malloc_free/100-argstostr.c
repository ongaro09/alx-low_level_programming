#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * argstostr - concatenates all arguments
 * @ac: represents number of arguments
 * @av: this is array of arguments
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	str = malloc(total_length + ac + 1);
	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
