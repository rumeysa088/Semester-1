#include<stdio.h>
int* getMaxMin(int* arr,int n){
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];arr[i]=arr[i+1];arr[i+1]=temp;
        }
    }int max=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     arr[1]=max;
   return arr;
}
int main(){
     int arr[5]={1,-2,3,-1,9};
     int* resultArr=getMaxMin(arr,5);
     printf("Min element is %d",resultArr[1]);
     printf("Max element is %d",resultArr[0]);
    return 0;
}