#include "main.h"
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int countWord, count, numWord;

	countWord = 0;
	numWord = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			countWord = 0;
		else if (countWord == 0)
		{
			countWord = 1;
			numWord++;
		}
	}

	return (numWord);
}


/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **arr, *splitStr;
	int x, y = 0, len = 0, words, counts = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (counts)
			{
				end = x;
				splitStr = (char *) malloc(sizeof(char) * (counts + 1));
				if (splitStr == NULL)
					return (NULL);
				while (start < end)
					*splitStr++ = str[start++];
				*splitStr = '\0';
				arr[y] = splitStr - counts;
				y++;
				counts = 0;
			}
		}
		else if (counts++ == 0)
			start = x;
	}
	arr[y] = NULL;

	return (arr);
}
