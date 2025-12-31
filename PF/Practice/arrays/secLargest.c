#include <stdio.h>

int main() {
            int arr[]={1,2,3,4,5,6,7,8};
            int max=arr[0],smax=arr[0];
            for(int i=0;i<8;i++)
            {
                if(arr[i]>max)max=arr[i];
            }     //max is 8
            for(int i=0;i<8;i++)
            {
                if(arr[i]>smax && arr[i]!=max)smax=arr[i];
            } printf("%d",smax);
    return 0;
}