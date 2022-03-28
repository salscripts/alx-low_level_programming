#include "main.h"

/**
 * _strstr - find the first occurence of the substring
 * needle in the string haystack, the terminating null bytes
 * \0 are not compared
 * @haystack: string to find substring in
 * @needle: substring to be fetched
 * Return: pointer to first char of matching substring,
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			k++;
		}
		if (*needle == '\0')
		{
			return (haystack - k);
		}
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
