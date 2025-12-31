#include <stdio.h>
int main() {
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int temp;
    for (int i=0;i<3;i++) {
        for (int j=i+1;j<3;j++){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3/2;j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][3-1-j];
            matrix[i][3-1-j] = temp;
        }
    }
    printf("Rotated Matrix:\n");
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
