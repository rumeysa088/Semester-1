#include<stdio.h>
int find(int r,int c,int ir,int ic,int maze[r][c]){
    if(ir==r-1 && ic==c-1)return 1;
    else if(ir<0 || ic<0 || ir>=r || ic>=c)return 0;
    else if(maze[ir][ic]==1)return 0;
     maze[ir][ic]=1;
    if(find( r,c,ir+1,ic,maze) || find( r,c,ir-1,ic,maze) || find( r,c,ir,ic+1,maze) ||find( r,c,ir,ic-1,maze) )return 1;
}
int main(){
    int maze[4][4] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0},
    {0, 0, 0, 0}
};
   if(find(4,4,0,0,maze))printf("Path exists");
   else printf("Path dsnt exist");
    return 0;
}

#include<stdio.h>
int ways(int ir,int ic,int r,int c,int maze[r+1][c+1]){
    if(ir==r && ic==c)return 1;
    else if(ir<0 || ic<0 || ir>r || ic>c)return 0;
    else if(maze[ir][ic]==1)return 0;
    
    return ways( r,c,ir+1,ic,maze) + ways( r,c,ir-1,ic,maze) + ways( r,c,ir,ic+1,maze) +ways( r,c,ir,ic-1,maze);
}
int main(){
int maze[4][4] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0},
    {0, 0, 0, 0}
};
   printf("Ways : %d",ways(0,0,3,3,maze));
    return 0;
}