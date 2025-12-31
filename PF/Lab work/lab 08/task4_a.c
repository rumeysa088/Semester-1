#include <stdio.h>
int main() {
    int temp[7][3];
    
    for(int i=0;i<7;i++){
        printf("Enter 3 temperatures for day %d: ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&temp[i][j]);
        }
    }
        for(int i=0;i<7;i++){
            for(int j=0;j<3;j++){
                printf("%d ",temp[i][j]);
            }printf("\n");
        }
     for(int i=0;i<7;i++){int sum=0;
            for(int j=0;j<3;j++){
                sum=sum+temp[i][j];
            }printf("Average for day %d is %d\n",i,sum/3);
        }   
    
    return 0;
}