#include <stdio.h>

int main() {
    int arr[10];
    int flag = 1;  

    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++) {
        if (arr[i+1] < arr[i]) {
            printf("Not in ascending order\n");
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("Array is in ascending order\n");
    }

    return 0;
}
