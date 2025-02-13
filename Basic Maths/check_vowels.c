#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str); // Convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin); // Read input including spaces
    gets(str); // Read input including spaces

    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
