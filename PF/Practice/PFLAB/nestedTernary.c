#include <stdio.h>

int main() {
    int a = 10, b = 12, c = 13;

    printf("%s", (a > b) 
                  ? (a > c)? "a is greatest" : "c is greatest"
                  : (b > c)? "b is greatest" : "c is greatest"
    ); 

    return 0;
}
