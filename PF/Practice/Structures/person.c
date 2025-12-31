#include<stdio.h>
#include<string.h>
int main(){

    struct Person{
        char name[20];
        int salary;
        int age;
    };
     typedef struct Person P;
     P a;
     P b;
    strcpy(a.name,"ali");
    a.salary=10000;
    a.age=19;

    strcpy(b.name,"sara");
    b.salary=9000;
    b.age=18;

    printf("%s\n",a.name);
    printf("%d",b.age);
    return 0;
}