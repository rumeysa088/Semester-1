#include <stdio.h>
int main() {
    int arr[]={1,2,3,4};
    int brr[]={2,3,4,5};
    int crr[20];
    int index=0;

    for (int i=0;i<4;i++)
    {
       for (int j=0;j<4;j++)
        {
         if (arr[i]==brr[j])
             {
            int found=0;
              for (int k=0;k<index;k++)
                {
                  if (crr[k]==arr[i]){
                        found=1;
                        break;
                    }
                }
                if (found==0) {
                    crr[index]=arr[i];
                    index++;
                }
            }
        }
    }
    for (int i=0;i<index;i++)
    {
        printf("%d ",crr[i]);
    }
    return 0;
}
