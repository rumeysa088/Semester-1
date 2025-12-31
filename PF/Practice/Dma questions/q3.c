#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *all = NULL;
    char s1[100], s2[100];
    
    printf("String Concatenator\n");
    printf("Enter two strings per line. Enter Q to quit.\n\n");
    
    while (1) {
        printf("String 1: ");
        scanf(" %[^\n]", s1);
        if (strcmp(s1, "Q") == 0) break;
        printf("String 2: ");
        scanf(" %[^\n]", s2);
        if (strcmp(s2, "Q") == 0) break;
        printf("Input: %s and %s\n", s1, s2);
        char *now = malloc(strlen(s1) + strlen(s2) + 1);
        if (now == NULL) {
            printf("Memory fail\n");
            break;
        }
        strcpy(now, s1);
        strcat(now, s2);
        if (all == NULL) {
            all = now;
        } else {
            int need = strlen(all) + strlen(now) + 1;
            char *tmp = realloc(all, need);
            
            if (tmp == NULL) {
                printf("Memory fail\n");
                free(now);
                break;
            }
            
            all = tmp;
            strcat(all, now);
            free(now);
        }
        
        printf("All: %s\n", all);
        printf("Len: %d\n\n", (int)strlen(all));
    }
    
    if (all != NULL) {
        printf("\nResult: %s\n", all);
        printf("Length: %d\n", (int)strlen(all));
        free(all);
    } else {
        printf("\nNo input\n");
    }
    
    return 0;
}