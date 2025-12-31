#include<stdio.h>
void print(int n,int arr[]){
      printf("{");
  for(int i=0;i<n;i++){
      printf(" %d,",arr[i]);
  }
    printf("}\n");
}
void recur(int arr[],int n,int index,int subset[],int sizeSub){
    if(index==n){
        print(sizeSub,subset);return;
    }

    subset[sizeSub]=arr[index];
    recur(arr,n,index+1,subset,sizeSub+1);

    recur(arr,n,index+1,subset,sizeSub);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int subset[n];
    recur(arr,n,0,subset,0);
    return 0;
}