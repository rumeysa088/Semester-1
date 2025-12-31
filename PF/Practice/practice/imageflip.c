#include<stdio.h>
void clockvise(int matrix[][1000]){
for(int i=0;i<1000;i++){
    for(int j=i;j<1000;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=temp;
    }
}
for(int i=0;i<1000;i++){
    for(int j=0;j<1000/2;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[i][1000-1-j];
        matrix[i][1000-1-j]=temp;
    }
}
}
void antiClockvise(int matrix[][1000]){
    for(int i=0;i<1000;i++){
    for(int j=0;j<1000/2;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[i][1000-1-j];
        matrix[i][1000-1-j]=temp;
    }
}
for(int i=0;i<1000;i++){
    for(int j=i;j<1000;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=temp;
    }
}
}
void flipX(int matrix[][1000]){
    for(int i=0;i<1000;i++){
    for(int j=i;j<1000;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=temp;
    }
}
antiClockvise(matrix);
}
void flipY(int matrix[][1000]){
       for(int i=0;i<1000;i++){
    for(int j=0;j<1000/2;j++){
        int temp=matrix[i][j];
        matrix[i][j]=matrix[i][1000-1-j];
        matrix[i][1000-1-j]=temp;
    }
}
}
int main() {
    int matrix[1000][1000];
    int opt;
    do{
        printf("\n--- Image Preview (Top-Left 10x10) ---\n");
           for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                 printf("%3d ", matrix[i][j]);
             }
               printf("\n");
  }
    printf("OPTIONS\n1:Clockvise\n2:Anticlockvise\n3:Flip around x axis \n 4:Flip around y axis\n5: exit");
    scanf("%d",&opt);

    switch(opt){
        case 1:
              clockvise(matrix);
        break;
        case 2:
               antiClockvise(matrix);
        break;
        case 3:
               flipX(matrix);
        break;
        case 4:
               flipY(matrix);
        break;
        case 5:break;
        default:break;
    }
}while(opt!=5);
    return 0;
}
