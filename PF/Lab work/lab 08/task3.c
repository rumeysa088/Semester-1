#include<stdio.h>
int main(){
    int arr[]={1,2,3,4},brr[]={2,3,4,5},count=0;

    for(int i=0;i<4;i++){
        int found=0;
        for(int j=0;j<4;j++){
            if(arr[i]==brr[j]){
                found=1;
                break;
            }
        }
        if(found==1){
            int already=0;
            for(int k=0;k<i;k++)
            {
                if(arr[k]==arr[i])
                {
                    already=1;
                    break;
             }
            }
        if(already==0)count++;
        }
    }

    printf("%d",count);
    return 0;
}
