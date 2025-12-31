#include <stdio.h>

int main() {
    int age;
    char ETR, WTR, DTR, MC;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Did you pass your eye test? P/F: ");
        scanf(" %c", &ETR);

        if (ETR == 'P') {
            printf("Did you pass your written test? P/F: ");
            scanf(" %c", &WTR);

            if (WTR == 'P') {
                printf("Did you pass your driving test? P/F: ");
                scanf(" %c", &DTR);

                if (DTR == 'P') {
                    if (age >= 60) {
                        printf("Do you have your medical certificate? Y/N: ");
                        scanf(" %c", &MC);

                        if (MC == 'Y') {
                            printf("CONGRATS! You're eligible\n");
                        } else {
                            printf("Sorry, you're not eligible\n");
                        }
                    } else {
                        printf("CONGRATS! You're eligible\n");
                    }
                } else {
                    printf("You are not eligible\n");
                }
            } else {
                printf("You need to retake the written exam\n");
            }
        } else {
            printf("You need to get glasses\n");
        }
    } else {
        printf("You are not eligible\n");
    }

    return 0;
}
