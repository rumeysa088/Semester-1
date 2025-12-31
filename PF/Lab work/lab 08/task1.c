#include <stdio.h>
int main() {
    int arr[]={1,2,3,4};
    int brr[]={2,3,4,5};
    int unionarr[20];
    int unionsize = 0;

    for (int i=0;i<4;i++) {
    unionarr[unionsize]=arr[i];
        unionsize++;           //          {2,3,4,5}
    }                         //unionarr[]={1,2,3,4}
    for (int i=0;i<4;i++) {
        int found=0;
        for (int j=0;j<unionsize;j++) {
            if (brr[i]==unionarr[j]) {
                found=1;
                break;
            }
        }
        if(found==0) {
            unionarr[unionsize]=brr[i];
           unionsize++;
        }
    }

    for (int i=0;i<unionsize;i++) {
        printf("%d ",unionarr[i]);
    }

    return 0;
}

