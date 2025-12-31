#include<stdio.h>

void dfs(int arr[5][5], int i, int j,int oldColor,int newColor) {
    if(i < 0 || i >= 3 || j < 0 || j >= 3 || arr[i][j] != oldColor) return;

    arr[i][j] = newColor; // mark visited

    // Visit all 4 neighbors recursively
    dfs(arr, i+1, j,oldColor,newColor);
    dfs(arr, i-1, j,oldColor,newColor);
    dfs(arr, i, j+1,oldColor,newColor);
    dfs(arr, i, j-1,oldColor,newColor);
}
int main(){
   int arr[3][3] = {
        {1,1,1},
        {1,1,0},
        {1,0,1}
    };
    int sr = 1, sc = 1, newColor = 2;

    int m = 3, n = 3;
    // print original matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     int oldColor=arr[sr][sc];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){ 
    //        if(arr[i][j]==1){dfs(arr,i,j);count++;
    //     }
    // }
    printf("\n");
    dfs(arr,sr,sc,oldColor,newColor);
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}