#include<stdio.h>
#include<string.h>
int main(){

    struct cters{
        char name[20];
        int age;
        int noOfTests;
        int avgRuns;
    };

    strct cters arr[20];

    for(int i=0;i<20;i++){
        scanf("%s",arr[i].name);
         scanf("%d",arr[i].age);
          scanf("%d",arr[i].noOfTests);
           scanf("%d",arr[i].avgRuns);
    }
    return 0;
}