#include<stdio.h>
int main(){

    int x,y;
    printf("enter the point that you want to check\n");
    scanf("%d,%d",&x,&y);
    if(x>0 && y>0){
        printf("(%d,%d) is in first quadrant",x,y);
    }
    else if(x<0 && y>0){
        printf("(%d,%d) is in second quadrant",x,y);
    }
    else if(x<0 && y<0){
        printf("(%d,%d) is in third quadrant",x,y);
    }
    else if(x>0 && y<0){
        printf("(%d,%d) is in forth quadrant",x,y);
    }
    else{
        printf("point(%d,%d) is at the origin",x,y);
    }
return 0;
}