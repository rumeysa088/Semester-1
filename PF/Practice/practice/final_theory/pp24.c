#include<stdio.h>
int main(){
     int n=5;int m=4;int work[m];int diff[n];
    printf("Enter difficulty levels: ");
    for(int i=0;i<n;i++){
        scanf("%d",&diff[i]);
    }
     printf("Enter ability: ");
    for(int i=0;i<m;i++){
        scanf("%d",&diff[i]);
    }int sum=0;
    int profit[5]={10,20,30,40,50};

    // for(int i=0;i<n-1;i++){
    //     if(diff[i]<diff[i+1]){int temp=diff[i];diff[i]=diff[i+1];diff[i+1]=temp;}
    // }
    // for(int i=0;i<n-1;i++){
    //     if(profit[i]<profit[i+1]){int temp=profit[i];profit[i]=profit[i+1];profit[i+1]=temp;}
    // }
    int pworker=0;
    for(int i=0;i<m;i++){ pworker=0;
        for(int j=0;j<n-1;j++){
            if(work[i]>=diff[j] ){if(profit[j]>pworker)pworker=profit[j];}
        }sum+=pworker;
    }
  
    printf("\nProfit: %d ",sum);
    return 0;
}