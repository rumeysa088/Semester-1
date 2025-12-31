#include <stdio.h>
#include <string.h>

int isPal(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
 
    char words[5][8] = {"abc", "car", "ada", "racecar", "cool"};
    int n = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < n; i++) {
        if (isPal(words[i])) {
            printf("%s\n", words[i]);   // First palindrome
            return 0;
        }
    }

    printf("No palindrome found.\n");
    return 0;
}
