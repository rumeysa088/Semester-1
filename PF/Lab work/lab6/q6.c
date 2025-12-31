#include <stdio.h>

int main() {
    int n = 7, count = 0;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}