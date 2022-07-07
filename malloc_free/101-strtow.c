#include <stdlib.h>
#include "main.h"

/**
 *word_length - gets the length of a word (string) passed to it
 *@word: a pointer to the word (string)
 *
 *Return: the length of the word (string) pointed to by @word
 */
int word_length(char *word)
{
	int index = 0, len = 0;
	
	while (*(word + index) && *(word + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 *words_count - counts the number of words contained within a string
 *@str: pointer to the string that the words should be counted
 *
 *Return: The number of words contained within @str
 */
int words_count(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_length(str + index);
		}
	}

	return (words);
}

/**
 *strtow - splits a string into words
 *@str: the string to be split
 *
 *Return: NULL if @str = NULL || @str = "" OR failure
 *a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int index = 0, num_words, num_letters, i, j;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	num_words = words_count(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (str[index] == ' ')
		index++;

		num_letters = word_length(str + index);
		words[i] = malloc(sizeof(char) * (num_letters + 1));

	if (words[i] == NULL)
	{
		for (; i >= 0; i--)
		free(words[i]);
			
			free(words);
			return (NULL);
	}

	for (j = 0; j < num_letters; j++)
		words[i][j] = str[index++];

	words[i][j] = '\0';
	}	
	words[i] = NULL;
	return (words);
}
