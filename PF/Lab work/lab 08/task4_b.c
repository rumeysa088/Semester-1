#include <stdio.h>
int main() {
    int marks[5][3] = {
                        {80, 75, 90},
                        {60, 70, 65},
                         {78, 82, 88},
                         {92, 85, 89},
                         {55, 60, 58}};
    
       for(int i=0;i<5;i++){int sum=0;
            for(int j=0;j<3;j++){
                sum=sum+marks[i][j];
            }printf("total marks for student %d are %d\n",i+1,sum);
        }
      for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<5;i++){
            sum+=marks[i][j];
        }
        printf("Average marks for subject %d are %d\n",j+1,sum/5);
    }                      
    
    return 0;
}