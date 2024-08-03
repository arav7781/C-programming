#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome recursively
int isPalindromeRecursive(char str[], int start, int end) {
    // Base case: If start index is greater than or equal to end index, it's a palindrome
    if (start >= end)
        return 1;
    
    // If characters at start and end don't match, it's not a palindrome
    if (str[start] != str[end])
        return 0;
    
    // Recursively check the substring between start and end
    return isPalindromeRecursive(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    // Convert the string to lowercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    
    // Check if the string is a palindrome
    if (isPalindromeRecursive(str, 0, strlen(str) - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    
    return 0;
}
