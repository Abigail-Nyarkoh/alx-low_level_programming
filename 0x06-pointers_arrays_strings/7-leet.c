#include "main.h"

/**
 * leet – encode into 1337 speak  
 * @n: input value
 *Return: n value
 */
char *leet (char *n)
{
	int I,  j;
	char s1[] = “aAeEo0T1l”;
	chars2[] = 4433007711”;
	
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j< 10; j++)
		{
			for (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
