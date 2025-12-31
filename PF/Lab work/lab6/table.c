#include <stdio.h>

int main() {
            int num;int i;
     printf("Enter number");
     scanf("%d",&num);

    for(i=1;i<=12;i++)
    {
       printf("%d X %d = %d\n",num,i,num*i);

    }


    return 0;
}