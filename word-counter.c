#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int countWords(char *);
int main()
{
	char s[500];
	printf("Enter a sentence: ");
	fgets(s, sizeof(s), stdin);
	printf("Number of words: %d\n", countWords(s));
}

int countWords(char s[])
{
	int words = 0;
	bool inWord = false;
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (isspace((unsigned char) s[i]))
		{
			inWord = false;
		}
		else if (!inWord)
		{
			inWord = true;
			words++;
		}
	}
	return words;
}
