// #include<stdio.h>
// int ways(int arr[][3],int r,int c,int ir,int ic){
//     if(ir==r&& ic==c)return 1;
//     int rightways=0,downways=0;
//     if(ic==c &&arr[ir+1][ic]!=1)downways+=ways(arr,r,c,ir+1,ic);
//     else if(ir==r && arr[ir][ic+1]!=1)rightways+=ways(arr,r,c,ir,ic+1);
//     else if(ir<r && ic<c){downways+=ways(arr,r,c,ir+1,ic);rightways+=ways(arr,r,c,ir,ic+1);}
//    return rightways+downways;
// }
// int main(){
//     int arr[3][3] = {
//         {0,0,0},
//         {0,1,0},
//         {0,0,0}
//     };
// int r=2,c=2;
//     printf("Ways to pass grid: %d",ways(arr,r,c,0,0));
//     return 0;
// }


#include <stdio.h>

int countPaths(int grid[][3], int r, int c, int rows, int cols) {
    // Out of bounds
    if (r >= rows || c >= cols)
        return 0;

    // Blocked cell
    if (grid[r][c] == 1)
        return 0;

    // Reached destination
    if (r == rows - 1 && c == cols - 1)
        return 1;

    // Recursive calls: right and down
    int right = countPaths(grid, r, c + 1, rows, cols);
    int down  = countPaths(grid, r + 1, c, rows, cols);

    return right + down;
}

int main() {
    int grid[3][3] = {
        {0,0,0},
        {0,1,0},
        {0,0,0}
    };

    int ways = countPaths(grid, 0, 0, 3, 3);
    printf("Total paths: %d\n", ways);

    return 0;
}
