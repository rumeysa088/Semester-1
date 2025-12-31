#include<stdio.h>
int add(int arr[],int index,int n){
    if(index>=n){return 0;}

    int sum=0;
    sum+=arr[index];
   return add(arr,index+1,n)+sum;
}
int main(){
   int arr[]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   int index=0;
   printf("Sum is : %d",add(arr,index,size));
    return 0;
}