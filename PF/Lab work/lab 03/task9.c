#include<stdio.h>
int main(){

    int age; char userName[10];
    printf("Enter your name");
    scanf("%s", userName);
    printf("Enter your age");
    scanf("%d",&age);

    printf("Your name is %s\n\t\tand\n\t\t your age is %d\n",userName,age);
    
    
return 0;

}