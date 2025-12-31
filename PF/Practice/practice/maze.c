#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int maze[5][5] = {
    {0,2,1,0,0},
    {0,1,0,1,2},
    {0,0,0,0,0},
    {2,1,0,1,0},
    {0,0,0,2,0}
};printf("Your maze: \n");
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",maze[i][j]);
    }printf("\n");
}
 int x=0,y=0; int apples=0;char move;int newx=0,newy=0;
 while(apples!=4){
     int flag=0;int newx=x,newy=y;
     printf("Enter your move in uppercase U,D,L,R\n");
     scanf(" %c",&move);
     
     if(move=='U')newx--;
     if(move=='D')newx++;
     if(move=='L')newy--;
     if(move=='R')newy++;
     
     if(newx>4||newy>4||newx<0||newy<0||maze[newx][newy]==1){flag=1;printf("Cant make move\n");}
     if(flag==0){
         x=newx;y=newy;
         printf("Your position is (%d,%d)\n",x+1,y+1);
         if(maze[x][y]==2){apples++;printf("Apple collected!\n");maze[x][y]=0;}
     }if(apples==4)printf("YOU WON !!");
 }

    return 0;
}
