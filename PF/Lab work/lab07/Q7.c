#include <stdio.h>

int main() {
    char str[] = "I am very happy cuz my % is very good almost 90!";
    int arr[30]; 
    int sum = 0;
    int j = 0;    

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            arr[j] = str[i] - '0'; 
            sum += arr[j];
            j++; 
        }
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}
