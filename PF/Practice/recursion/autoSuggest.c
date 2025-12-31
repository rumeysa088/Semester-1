#include <stdio.h>
#include <string.h>

// Recursive function to detect words starting with "ca"
void autodetect(char str[][10], char store[][10], int index, int n, int *stindex) {
    if (index >= n) return;  // Base case: reached end of array

    // Check if the word starts with "ca"
    if (str[index][0] == 'c' && str[index][1] == 'a') {
        strcpy(store[*stindex], str[index]); // store the word
        (*stindex)++;                         // increment stored count
    }

    // Recursive call to next index
    autodetect(str, store, index + 1, n, stindex);
}

int main() {
    char str[][10] = {"car", "cat", "care", "dog", "cab"};
    int n = sizeof(str) / sizeof(str[0]);

    char store[n][10];  // enough space to store all possible matches
    int stindex = 0;

    autodetect(str, store, 0, n, &stindex);  // pass stindex by reference

    // Print all stored words dynamically
    printf("Words starting with 'ca':\n");
    for (int i = 0; i < stindex; i++) {
        printf("%s ", store[i]);
    }
    printf("\n");

    return 0;
}
