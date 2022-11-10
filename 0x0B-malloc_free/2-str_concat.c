#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory
 **/

char *str_concat(char *s1, char *s2)
{

	char *newStr;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	newStr = malloc(sizeof(char) * (x + y + 1));

	if (newStr == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		newStr[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		newStr[x] = s2[y];
		x++, y++;
	}
	newStr[x] = '\0';

	return (newStr);
}
