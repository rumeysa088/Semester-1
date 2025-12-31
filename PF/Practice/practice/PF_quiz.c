// #include<stdio.h>
// int main(){
//     char arr[4][4]={{'a','b','c','d'},
//                     {'e','f','g','h'},  
//                     {'i','j','k','l'}, 
//                     {'m','n','o','p'}};
//     char str[20];
//     printf("Enter string: ");
//     scanf("%s",str);
//     int size = sizeof(str);

//     for(int i=0;i<size;i++)
//     {
//         if(str[i]=='L')
//         {
//             for(int j=0;j<4;j++)
//             {
//                 for(int k=0;k<1;k++)
//                 {
//                     char temp=arr[j][k];
//                     arr[j][k]=arr[j][k+1];
//                     arr[j][k+1]=arr[j][k+2];
//                     arr[j][k+2]=arr[j][k+3];
//                     arr[j][k+3]=temp;
//                 }
//             }
//         }

//         if(str[i]=='R')
//         {
//             for(int j=0;j<4;j++)
//             {
//                 for(int k=0;k<1;k++)
//                 {
//                     char temp=arr[j][k+3];
//                     arr[j][k+3]=arr[j][k+2];
//                     arr[j][k+2]=arr[j][k+1];
//                     arr[j][k+1]=arr[j][k];
//                     arr[j][k]=temp;
//                 }
//             }
//         }

//         if(str[i]=='U')
//         {
//             for(int j=0;j<1;j++)
//             {
//                 for(int k=0;k<4;k++)
//                 {
//                     char temp=arr[j][k];
//                     arr[j][k]=arr[j+1][k];
//                     arr[j+1][k]=arr[j+2][k];
//                     arr[j+2][k]=arr[j+3][k];
//                     arr[j+3][k]=temp;
//                 }
//             }
//         }

//         if(str[i]=='D')
//         {
//             for(int j=0;j<1;j++)
//             {
//                 for(int k=0;k<4;k++)
//                 {
//                     char temp=arr[j+3][k];
//                     arr[j+3][k]=arr[j+2][k];
//                     arr[j+2][k]=arr[j+1][k];
//                     arr[j+1][k]=arr[j][k];
//                     arr[j][k]=temp;
//                 }
//             }
//         }
//     }

//     for(int j=0;j<4;j++)
//     {
//         for(int k=0;k<4;k++)
//         {
//             printf("%c",arr[j][k]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char matrix[4][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i', 'j', 'k', 'l'},
        {'m', 'n', 'o', 'p'}
    };

    char moves[100];
    int valid;

    // Input validation
    do {
        valid = 1;
        printf("Enter moves (only L, R, U, D): ");
        scanf("%s", moves);
        for (int i = 0; i < strlen(moves); i++) {
            if (moves[i] != 'L' && moves[i] != 'R' && moves[i] != 'U' && moves[i] != 'D') {
                valid = 0;
                printf("Invalid character '%c' found! Try again.\n", moves[i]);
                break;
            }
        }
    } while (!valid);

    // Perform each move
    for (int m = 0; m < strlen(moves); m++) {
        char move = moves[m];

        if (move == 'L') { // Shift each row left
            for (int i = 0; i < 4; i++) {
                char temp = matrix[i][0];
                for (int j = 0; j < 3; j++)
                    matrix[i][j] = matrix[i][j + 1];
                matrix[i][3] = temp;
            }
        }

        else if (move == 'R') { // Shift each row right
            for (int i = 0; i < 4; i++) {
                char temp = matrix[i][3];
                for (int j = 3; j > 0; j--)
                    matrix[i][j] = matrix[i][j - 1];
                matrix[i][0] = temp;
            }
        }

        else if (move == 'U') { // Shift each column up
            for (int j = 0; j < 4; j++) {
                char temp = matrix[0][j];
                for (int i = 0; i < 3; i++)
                    matrix[i][j] = matrix[i + 1][j];
                matrix[3][j] = temp;
            }
        }

        else if (move == 'D') { // Shift each column down
            for (int j = 0; j < 4; j++) {
                char temp = matrix[3][j];
                for (int i = 3; i > 0; i--)
                    matrix[i][j] = matrix[i - 1][j];
                matrix[0][j] = temp;
            }
        }
    }

    // Print final matrix
    printf("\nFinal Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%c ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
