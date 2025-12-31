#include<stdio.h>
#include<stdlib.h>
int main(){
    int **p,cols[10],n;
     p=(int**)malloc(10*sizeof(*p));

    for(int i=0;i<10;i++){
        printf("Enter number of columns for row %d: ",i+1);
        scanf("%d",&n);
    cols[i]=n;
     p[i]=(int*)malloc(n*sizeof(int));
    for(int j=0;j<n;j++){
       p[i][j]=i+1;  }
    }
    for(int i=0;i<10;i++){
     printf("Row %d : ",i+1);
      for(int j=0;j<cols[i];j++){
        printf("%d ",p[i][j]);}
     printf("\n");
    }
    for(int i=0;i<10;i++)free(p[i]);
    free(p);
return 0;
}
