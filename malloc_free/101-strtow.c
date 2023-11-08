#include "holberton.h"
#include <stdlib.h>

/**
 * is_separator - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if it's a space, 0 otherwise.
 */
int is_separator(char c)
{
	return c == ' ';
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_separator(str[i]))
		{
			count++;
			while (str[i] && !is_separator(str[i]))
				i++;
		}
	}
	return count;
}

/**
 * strdup_word - Duplicates a word from a string.
 * @str: The input string.
 *
 * Return: A pointer to the duplicated word.
 */
char *strdup_word(char *str)
{
	int len = 0;

	while (str[len] && !is_separator(str[len]))
		len++;
	char *word = malloc(len + 1);

	if (!word)
		return (NULL);
	for (int i = 0; i < len; i++)
		word[i] = str[i];
	word[len] = '\0';
	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of words.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	char **words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_separator(str[i]))
		{
			words[j] = strdup_word(str + i);

			if (words[j] == NULL)
			{
				while (j > 0)
					free(words[--j]);
				free(words);
				return (NULL);
			}
			j++;
			while (str[i] && !is_separator(str[i]))
				i++;
		}
	}
	words[j] = NULL;
	return (words);
}
