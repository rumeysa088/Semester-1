#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    // Dynamically allocate memory for 5 integers
    int* ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d in array:\n", i + 1);
        scanf("%d", ptr + i);
    }

    // Output values using pointer arithmetic
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    
    free(ptr);

    return 0;
}
