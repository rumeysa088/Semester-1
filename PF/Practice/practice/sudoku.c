#include<stdio.h>

int main() {
    int sudoku[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 5}  // last 5 makes it invalid
    };

    int count[10];
    int flag = 0;

    // Check rows
    for(int i=0; i<9; i++) {
        for(int k=0; k<10; k++) count[k] = 0; // reset
        for(int j=0; j<9; j++) count[sudoku[i][j]]++;
        for(int k=1; k<=9; k++) {
            if(count[k] > 1) { flag = 1; break; }
        }
        if(flag) { printf("not valid\n"); return 0; }
    }

    // Check columns
    for(int i=0; i<9; i++) {
        for(int k=0; k<10; k++) count[k] = 0; // reset
        for(int j=0; j<9; j++) count[sudoku[j][i]]++;
        for(int k=1; k<=9; k++) {
            if(count[k] > 1) { flag = 1; break; }
        }
        if(flag) { printf("not valid\n"); return 0; }
    }

    // Check 3x3 subgrids
    for(int blockRow=0; blockRow<3; blockRow++) {
        for(int blockCol=0; blockCol<3; blockCol++) {
            for(int k=0; k<10; k++) count[k] = 0; // reset
            for(int i=0; i<3; i++) {
                for(int j=0; j<3; j++) {
                    int val = sudoku[blockRow*3 + i][blockCol*3 + j];
                    count[val]++;
                }
            }
            for(int k=1; k<=9; k++) {
                if(count[k] > 1) { flag = 1; break; }
            }
            if(flag) { printf("not valid\n"); return 0; }
        }
    }

    printf("valid\n");
    return 0;
}
