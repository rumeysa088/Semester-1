#include <stdio.h>

int main() {
            int arr[10];int sum=0;
            for(int i=0;i<10;i++)
            {
              printf("Enter amount of profit/loss");
              scanf("%d",&arr[i]);
            }
             for(int i=0;i<10;i++)
            {
              if(arr[i]>0)
              {
                sum=sum+arr[i];
              }
            }
            printf("Sum of profit is %d",sum);

    return 0;
}