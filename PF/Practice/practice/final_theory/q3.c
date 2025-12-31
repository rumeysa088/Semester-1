#include<stdio.h>
#include<stdlib.h>
void input(int r,int c,int arr[][c]){
    for(int i=0;i<c;i++){
        printf("\nEnter data for day # %d",i+1);
        for(int j=0;j<r;j++){
            printf("\nRoute# %d",j+1);
            scanf("%d",&arr[j][i]);
        }
    }
}
void display(int r, int c, int arr[][c]) {

    // Print column headers
    printf("\n\t\t");
    for (int j = 0; j < c; j++) {
        printf(" Day %d\t", j + 1);
    }
    printf("\n");

    // Print data
    for (int i = 0; i < r; i++) {
        printf("Route #%d\t", i + 1);
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
void monTotal(int r,int c,int arr[][c]){int sum=0;
    for(int i=0;i<r;i++){
        sum+=arr[i][0];
    }
    printf("\nTOTAL paseengers for monday %d ",sum);
}
void rZTotal(int r,int c,int arr[][c]){int sum=0;
    for(int i=0;i<c;i++){
        sum+=arr[0][i];
    }
    printf("\nTOTAL passengers for route zero %d ",sum);
}
void findMax(int r,int c,int arr[][c]){int max=-1;
    for(int i=0;i<c;i++){
       if(arr[3][i]>=max)max=arr[3][i];
    }
    printf("\nmax paseengers for route 3 %d ",max);
}
void findMin(int r,int c,int arr[][c]){int min=arr[0][0];
    for(int i=0;i<r;i++){
       if(arr[i][3]<=min)min=arr[i][3];
    }
    printf("\nmin paseengers for thursday %d ",min);
}
void findAvg(int r,int c,int arr[][c]){int sum=0;int n=r*c;
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
         sum+=arr[i][j];
       }
    }float avg=sum/n;
    printf("\nAverage: %f ",avg);
}
void findMaxP(int r,int c,int arr[][c]){int max=-1;int sum=0;int index;
    for(int i=0;i<r;i++){sum=0;
       for(int j=0;j<c;j++){
         sum+=arr[i][j];
       }if(sum>=max){max=sum;index=i;}
    }
    printf("\nAMax passengers are %d in row number %d",max,index);
}
int main(){
    int r=4,c=5;
     int (*arr)[5]=malloc(4*sizeof(*arr));
   
      input(r,c,arr);
     display(r,c,arr);
     monTotal(r,c,arr);
     rZTotal(r,c,arr);
     findMax(r,c,arr);
     findMin(r,c,arr);
     findAvg(r,c,arr);
     findMaxP(r,c,arr);
       free(arr);
    return 0;
}