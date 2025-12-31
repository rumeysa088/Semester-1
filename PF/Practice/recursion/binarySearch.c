#include<stdio.h>
int search(int num,int arr[],int size){ 
    if(size==0)return 0;
     int i=1;
    if(arr[size-i]==num){return size-i;i++;}
    search(2,arr,size-1);
}
int main(){
    int arr[]={1,2,3,4,5};
     printf("number is present at index %d",search(2,arr,5));
    return 0;
}