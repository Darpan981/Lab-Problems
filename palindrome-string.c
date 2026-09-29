#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char s[200];
	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);
	
	int len = strlen(s);
	if (len > 0 && s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
		len--;
	}
	
	int left = 0, right = len - 1;
	bool isPalindrome = true;
	
	while (left < right)
	{
		while (left < right && !isalnum((unsigned char) s[left]))
		{
			left++;
		}
		while (left < right && !isalnum((unsigned char) s[right]))
		{
			right--;
		}
		if (tolower((unsigned char) s[left] != tolower((unsigned char) s[right])))
		{
			isPalindrome = false;
			break;
		}
		left++;
		right--;
	}
	
	if (isPalindrome)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	return 0;
}





