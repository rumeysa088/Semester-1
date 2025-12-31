#include<stdio.h>
#include<string.h>
int main(){                               
 
    int age;
    char gender[20];

    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your gender");
    scanf("%s",&gender);

    if(age>=18){
         if((strcmp(gender,"male")==0)){
        printf("Adult Male");}
         else{
        printf("Adult Female");
        }   
    }else{
        printf("Minor");
    }

return 0;}