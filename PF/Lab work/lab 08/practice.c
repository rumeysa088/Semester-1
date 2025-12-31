// #include <stdio.h>
// int main() {
//     int arr[]={1,2,2,3,4};
//     int brr[]={2,3,4,5};
//     int intersection[20];
//     int intersize = 0;int count=0;

//     for(int i=0;i<5;i++){ int found=0;
//         for(int j=0;j<4;j++)
//         {
//            if(arr[i]==brr[j]){found=1;break;}
//         }int alr=0;
//         for(int k=0;k<intersize;k++)
//         {
//           if(arr[i]==intersection[k])alr=1;
//         }
//         if(found==1&&alr==0){intersection[intersize]=arr[i];intersize++;count++;}
//     }
     
//     for (int i=0;i<intersize;i++) {
//         printf("%d ",intersection[i]);
//     }printf("common are %d",count);

//     return 0;
// }
#include <stdio.h>
int main() {
    int marks[5][3] = {
                        {80, 75, 90},
                        {60, 70, 65},
                         {78, 82, 88},
                         {92, 85, 89},
                         {55, 60, 58}};int sum=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
          sum=sum+marks[j][i];
        }printf("Avg for subject %d is %d\n",i+1,sum/5);
    }                
    
    return 0;
}