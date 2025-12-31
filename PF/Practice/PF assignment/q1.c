#include <stdio.h>

int main() {
    int TA, country, num;

    printf("Enter transaction amount: ");
    scanf("%d", &TA);

    if (TA >= 10000) {
        printf("FLAGGED TRANSACTION \a\n");
    } else {
        printf("Enter transaction country (1 for Pakistan, 2 for Others): ");
        scanf("%d", &country);

        if (country != 1) {
            printf("FLAGGED TRANSACTION \a\n");
        } else {
            printf("Enter number of transactions made in 1 hour: ");
            scanf("%d", &num);

            if (num >= 5) {
                printf("FLAGGED TRANSACTION \a\n");
            } else {
                printf("Normal transaction\n");
            }
        }
    }

    return 0;
}
