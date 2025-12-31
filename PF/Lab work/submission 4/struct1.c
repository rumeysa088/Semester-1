#include<stdio.h>

struct student{
    int age;
    char fName[50];
    char lName[50];
    int standard;
}a;
int main(){
 
    printf("Enter std age: ");
    scanf("%d",&a.age);
    printf("Enter std first name: ");
    scanf("%s",a.fName);
    printf("Enter std last name: ");
    scanf("%s",a.lName);
    printf("Enter std standard: ");
    scanf("%d",&a.standard);

     printf("%d %s %s %d\n", a.age, a.fName, a.lName, a.standard);
    return 0;
}