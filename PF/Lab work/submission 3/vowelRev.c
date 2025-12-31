#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    if (c == 'a' || c == 'A') return 1;
    if (c == 'e' || c == 'E') return 1;
    if (c == 'i' || c == 'I') return 1;
    if (c == 'o' || c == 'O') return 1;
    if (c == 'u' || c == 'U') return 1;
    return 0;
}

int main() {
    char s[200];
    printf("Enter a string: ");
    scanf("%s", s); 

    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && isVowel(s[left]) == 0) {
            left++;
        }
        while (left < right && isVowel(s[right]) == 0) {
            right--;
        }
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    printf("%s\n", s);
    return 0;
}
