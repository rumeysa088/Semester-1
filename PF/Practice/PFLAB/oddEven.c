#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if((num & 1) == 0) {
    printf("Even\n");
} else {
    printf("Odd");
}


    return 0;
}