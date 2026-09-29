#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[500];
	
	printf("Write a sentence: ");
	fgets(s, sizeof(s), stdin);
	int len = strlen(s);
	if (len > 0 && s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
		len--;
	}
	printf("Total characters: %d\n", len);
	
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (isalpha == s[i])
		{
			count++;
		}
	}
	printf("Total letters: ");
	printf("Total digits: ");
	printf("Total spaces: ");
	printf("Total vowels: ");
	printf("Total words: ");
	
	return 0;
}

int countWords(char s[])
{
	
}
