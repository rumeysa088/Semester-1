#include<stdio.h>
int steps(int n){

    if(n==1)return 1;
    if(n==2)return 2;
    return steps(n-1)+steps(n-2);
}
int main(){

    int n;
    printf("Enter number of stairs: ");
    scanf("%d",&n);
    printf("No. of steps will be: %d",steps(n));
    return 0;
}