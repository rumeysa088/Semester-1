#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    num = num ^ 2; 

    
    printf("Number after toggling 2nd bit is  %d\n", num);

    return 0;
}