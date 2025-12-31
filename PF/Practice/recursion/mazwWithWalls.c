#include<stdio.h>
int finder(int arr[][5],int r,int c,int ir,int ic){
    if(ir==r && ic==c)return 1;
    else if(ir>r || ic>c || ir<0 || ic<0) return 0;
    else if(arr[ir][ic]==1)return 0;
    arr[ir][ic]=1;
    if(finder(arr,r,c,ir+1,ic)||
    finder(arr,r,c,ir-1,ic)||
    finder(arr,r,c,ir,ic+1)||
    finder(arr,r,c,ir,ic-1))return 1;
}
int main(){
     int N=5;
     int maze[5][5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 1, 0}
    }; 

    if(finder(maze,N-1,N-1,0,0)){printf("Path exists! ");}else printf("Path doesnt exist");
    return 0;
}