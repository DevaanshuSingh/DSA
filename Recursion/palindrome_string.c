#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkPalindrome(char n[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (n[start] != n[end]) {
        return false;
    }
    return checkPalindrome(n, start + 1, end - 1);
}

int main() {
    char n[] = "101";
    int end = strlen(n) - 1;

    if (checkPalindrome(n, 0, end))
        printf("Yes, it is a Palindrome\n");
    else
        printf("No, it is not a Palindrome\n");

    return 0;
}
