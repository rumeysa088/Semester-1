#include<stdio.h>
int main(){

    int sub1,sub2,sub3,total;
    float percentage;

    printf("Enter marks of 3 subjects each out of 100\n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    percentage=( total/300.0 )*100;

    printf(" Your percentage is %.2f", percentage);

    return 0;
}