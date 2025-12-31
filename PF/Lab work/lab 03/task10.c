#include<stdio.h>
int main(){
            int a=10, b=20,temp;

            printf(" a is %d b is %d\n",a,b);

            temp=a;
            a=b;
            b=temp;
            
            printf(" after swapping\n");
            printf(" a is %d b is %d",a,b);


   return 0;         

}